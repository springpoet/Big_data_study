#include<stdio.h>

int big(int a, int b);
int bigNum(int a, int b);
void switching();


int main()
{
	//2��
	int num1, num2;
	printf("�� ���� �� ū ����? ");
	scanf_s("%d,%d", &num1, &num2);
	bigNum(num1, num2);
	int result = bigNum(num1, num2);
	printf("=%d\n", result);

	//3��
	int num3, num4;
	printf("�� ���ڸ� �ٲ�� ");
	scanf_s("%d,%d", &num3, &num4);
	switching(num3, num4);
	printf("=%d,%d\n", num3, num4);

	//1��
	int num5, num6;
	printf("�� ���� �� ū ���ڴ�? ");
	scanf_s("%d,%d", &num5, &num6);
	big(num5, num6);

	return 0;
}
int a;
int b;

//1��
int big(int a, int b)
{
	if (a < b)
		printf("=%d\n", b);
	else
		printf("=%d\n", a);
}
//2��
int bigNum(int a, int b)
{
	if (a < b)
		return b;
	else 
		return a;
}

//3��
void switching()
{
	int temp = a;
	a = b;
	b = temp;
}

