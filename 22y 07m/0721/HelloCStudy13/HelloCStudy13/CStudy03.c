#include<stdio.h>
extern int a;//CTest.c���� �� ���� a

void printNum(int);
int main()
{
	//b++;//���⼭ ����! static �پ CTest.c �ۿ��� ��� �Ұ�
	a++;
	printf("%d\n", a);
	up_Print();
	return 0;
}


void printNum(int a)//�Լ��� ������ ���� ���� ���Ǹ� �ؿ� ���⵵ ��
{
	printf("\n%d", a);
}