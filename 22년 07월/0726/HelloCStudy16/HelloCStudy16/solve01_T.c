#include<stdio.h>
	//2번.
void gugudan()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%2d * %2d=%2d\n", i, j, i * j);
	}
}

	//3.번
void gugudan2()
{
	printf("몇 단 부터 몇 단?");
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("몇 부터 몇 까지 곱?");
	int c, d;
	scanf_s("%d %d", &c, &d);
	for (int i = a; i <= b; i++)
	{
		for (int j = c; j <= d; j++)
		{
			printf("\n");
			printf("%2d *%2d=%2d", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	//1번.
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%2d * %2d=%2d\n", i, j, i * j);
	}

	gugudan();
	gugudan2();

	return 0;
}