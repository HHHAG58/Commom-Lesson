#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//sizeof�ڲ��ı���ʽ����������
//int main()
//{
//	short s = 0;
//	int a = 0;
//	printf("%d\n", sizeof(s = a + 5));//����������s(short����)�Ĵ�С
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// ~ ��λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - ����
//	//11111111111111111111111111111110 - ����
//	//10000000000000000000000000000001 - ԭ��
//	//��-1
//	printf("%d\n", ~a);
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a); //15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	return 0;
//}

//������
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//&&ֻҪ�����һ��0(��)����Ķ���ִ��
//	//i = a++ && ++b && d++;//1 2 3 4
//	//||ֻҪ�����һ��1(��)����Ķ���ִ��
//	i = a++ || ++b || d++;//1 3 3 4
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


////�ṹ��
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
// };
//
//int main()
//{
//	//�ṹ�����
//	struct Stu s1 = { "����",20,"20190123" };
//	//ʹ��ָ��
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	/*printf("%s\n", (*ps).name);
//	printf("%s\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}

//��ʽ����ת��
//int main()
//{
//	//00000011 - a
//	char a = 3;
//	//01111111 - b
//	char b = 127;
//	//a��b������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//c - 10000010
//	//11111111111111111111111110000010 - c�Ĳ���
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	char c = a + b;//char����ֻ��8������λ
//	printf("%d\n", c);
//	return 0;
//}