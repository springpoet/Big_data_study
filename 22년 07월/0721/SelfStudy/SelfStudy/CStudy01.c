#include<stdio.h>

void enterKey()
{
	printf("\n");
}

void printPowerNumber(int n)
{
	printf("%d", n * n);
}

int inputNum()//숫자를 입력받음
{
	int n;
	printf("숫자 입력해요\n");
	scanf_s("%d", &n);
	return n;
}
int powerNum(int n, int p)//n:숫자,p:제곱 수
{
	if (p <= 0)//음수 제곱은 하지 말자
		return 1;
	else if (p == 1)
		return n;
	else
	{
		int num = n;
		for (int i = 1; i < p; i++)
			n *= num;
	}
	return n;
}
int printNumber(int a)
{
	printf("%d", a);
}
int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printNumber(30);
	enterKey();
	printNumber(powerNum(inputNum(), 3));
	enterKey();

	num = inputNum();
	int power = inputNum();
	printNumber(powerNum(num, power));

	return 0;
}