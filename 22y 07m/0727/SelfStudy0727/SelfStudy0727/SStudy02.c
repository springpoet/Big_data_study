#include<stdio.h>
int q6_guguSum()
{
	int sum = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			sum += (i * j);
		}
	}
	return sum;
}
void q7_gugu(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);

		}
		printf("\n");
	}
}

void q8_gugu(int a, int b)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = a; j <= b; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int q9_guguSum(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			sum += i * j;
		}
	}
	return sum;
}

int main()
{
	//6��.
	printf("%d\n",q6_guguSum());

	//7��.
	int a7, b7;
	printf("�� �ܺ��� �� �� ���? ");
	scanf_s("%d %d", &a7, &b7);
	q7_gugu(a7, b7);
	
	//8��.
	int a8, b8;
	printf("�� ���� �� ���� ��?");
	scanf_s("%d %d", &a8, &b8);
	q8_gugu(a8, b8);

	//9��.
	int a9, b9;
	printf("���� ���� �ܼ� ����? ");
	scanf_s("%d %d", &a9, &b9);
	printf("%d\n", q9_guguSum(a9,b9));
	return 0;
}