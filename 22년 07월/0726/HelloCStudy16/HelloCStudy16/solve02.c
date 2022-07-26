#include<stdio.h>
	//1번 함수.
int gugu_sum()
{
	int num1, num2;
	printf("몇 단 부터 몇 단 까지?");
	scanf_s("%d %d", &num1, &num2);
	int num3, num4;
	printf("어디부터 어디까지 곱??");
	scanf_s("%d %d", &num3, &num4);
	int sum = 0;
	for (int i = num1; i <= num2; i++)
	{
		for (int j = num3; j <= num4; j++)
		{
			printf("\n");
			printf("%2d * %2d=%2d", i, j, i * j);
			sum += i * j;
		}
		printf("\n");
	}
	return sum;
}
	//2번 함수.
void gugudan1(int a)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%2d * %2d = %2d\n", a, i, a* i);
	}
}

void gugudan2(int a, int b)
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = a; j <= b; j++)
		{
			printf("\n");
			printf("%2d * %2d = %2d\n",i,j,i*j);
		}
	}
}

int gugudan3(int a, int b)
{
	int sum=0;
	for (int i = a; i <= b; i++)
	{
		for(int j=1;j<=9;j++)
		sum += i*j;
	}
	return sum;
}

int main()
{
	//1번.
	printf("구구단의 합 : %d\n", gugu_sum());

	//2번.
	printf("원하는 구구단 단수는?");
	int dan;
	scanf_s("%d", &dan);
	gugudan1(dan);

	//3번.
	int a, b;
	printf("몇 부터 몇 까지 곱할까? ");
	scanf_s("%d %d", &a, &b);
	gugudan2(a,b);

	//4번.
	int c, d;
	printf("몇 단부터 몇 단까지? ");
	scanf_s("%d %d", &c, &d);
	printf(" = %d\n", gugudan3(c, d));
	return 0;
}