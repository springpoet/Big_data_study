#include<stdio.h>
void Swap(int* a,int* b,int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
void multiple()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
void q5_multiple()
{
	int num1, num2;
	printf("몇 단 부터 몇 단 까지? ");
	scanf_s("%d %d", &num1, &num2);
	int num3, num4;
	printf("몇 부터 몇 까지 곱? ");
	scanf_s("%d %d", &num3, &num4);
	for (int i = num1; i <= num2; i++)
	{
		for (int j = num3; j <= num4; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

}
int main()
{
	//1번.
	int a1, b1, c1;
	printf("숫자 세 개 받으세요. ");
	scanf_s("%d %d %d", &a1, &b1, &c1);
	printf("전 : %d %d %d\n", a1, b1, c1);
	Swap(&a1, &b1, &c1);
	printf("후 : %d %d %d\n", a1, b1, c1);

	//2번.
	int a2, b2, c2;
	a2 = a1;
	b2 = b1;
	c2 = c1;
	do
	{
		Swap(&a1, &b1, &c1);
		printf("a1=%d, b1=%d, c1=%d\n", a1, b1, c1);
	} while (a2!=a1);
	
	//3번.
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	//4번.
	multiple();

	//5번.
	q5_multiple();
	
	
	return 0;
}