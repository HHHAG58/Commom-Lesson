#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������
//1.��������������a,b��ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a=%d b=%d\n", a, b);
//
//	//�Ӽ��� - ���ݹ�����ܻ����
//	/*
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after: a=%d b=%d\n", a, b);*/
//
//	//���ķ��� - �ɶ��Բִ��Ч�ʲ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a=%d b=%d\n", a, b);
//
//	return 0;
//}

//2.��һ�������洢���ڴ��еĶ�������1�ĸ���
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	//ͳ��num�Ĳ������м���1
	/*while (num)//����ͳ����ʾ����
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