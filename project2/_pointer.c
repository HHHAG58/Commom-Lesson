#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	
//	/*指针的大小由电脑位数决定
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;
//	////结果相同
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	//F10调试
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;//全部4个字节变为0
//	*/
//	char* pc = &a;
//	*pc = 0;//第一个字节变为0
//
//	return 0;
//
//}

//指针+-整数
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//c4
//	printf("%p\n", pa + 1);//c8
//	printf("%p\n", pc);//c4
//	printf("%p\n", pc + 1);//c5
//	return 0;
//}

//指针给数组赋值
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//首元素地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}