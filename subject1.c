#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//面试题
//1.不创建变量交换a,b的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a=%d b=%d\n", a, b);
//
//	//加减法 - 数据过大可能会溢出
//	/*
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after: a=%d b=%d\n", a, b);*/
//
//	//异或的方法 - 可读性差，执行效率不高
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//2.求一个整数存储在内存中的二进制中1的个数
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	//统计num的补码中有几个1
	/*while (num)//不能统计显示负数
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}*/

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}