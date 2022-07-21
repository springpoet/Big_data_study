#include<stdio.h>

int big(int a, int b);
int bigNum(int a, int b);
void switching();


int main()
{
	//2번
	int num1, num2;
	printf("두 숫자 중 큰 값은? ");
	scanf_s("%d,%d", &num1, &num2);
	bigNum(num1, num2);
	int result = bigNum(num1, num2);
	printf("=%d\n", result);

	//3번
	int num3, num4;
	printf("두 숫자를 바꿔라 ");
	scanf_s("%d,%d", &num3, &num4);
	switching(num3, num4);
	printf("=%d,%d\n", num3, num4);

	//1번
	int num5, num6;
	printf("두 숫자 중 큰 숫자는? ");
	scanf_s("%d,%d", &num5, &num6);
	big(num5, num6);

	return 0;
}
int a;
int b;

//1번
int big(int a, int b)
{
	if (a < b)
		printf("=%d\n", b);
	else
		printf("=%d\n", a);
}
//2번
int bigNum(int a, int b)
{
	if (a < b)
		return b;
	else 
		return a;
}

//3번
void switching()
{
	int temp = a;
	a = b;
	b = temp;
}

