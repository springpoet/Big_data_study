#include<stdio.h>
	//2��.
void gugudan()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%2d * %2d=%2d\n", i, j, i * j);
	}
}

	//3.��
void gugudan2()
{
	printf("�� �� ���� �� ��?");
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("�� ���� �� ���� ��?");
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
	//1��.
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%2d * %2d=%2d\n", i, j, i * j);
	}

	gugudan();
	gugudan2();

	return 0;
}