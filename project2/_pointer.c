#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	
//	/*ָ��Ĵ�С�ɵ���λ������
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;
//	////�����ͬ
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	//F10����
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;//ȫ��4���ֽڱ�Ϊ0
//	*/
//	char* pc = &a;
//	*pc = 0;//��һ���ֽڱ�Ϊ0
//
//	return 0;
//
//}

//ָ��+-����
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

//ָ������鸳ֵ
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//��Ԫ�ص�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}