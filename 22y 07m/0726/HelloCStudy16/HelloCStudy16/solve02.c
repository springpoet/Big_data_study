#include<stdio.h>
	//1�� �Լ�.
int gugu_sum()
{
	int num1, num2;
	printf("�� �� ���� �� �� ����?");
	scanf_s("%d %d", &num1, &num2);
	int num3, num4;
	printf("������ ������ ��??");
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
	//2�� �Լ�.
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
	//1��.
	printf("�������� �� : %d\n", gugu_sum());

	//2��.
	printf("���ϴ� ������ �ܼ���?");
	int dan;
	scanf_s("%d", &dan);
	gugudan1(dan);

	//3��.
	int a, b;
	printf("�� ���� �� ���� ���ұ�? ");
	scanf_s("%d %d", &a, &b);
	gugudan2(a,b);

	//4��.
	int c, d;
	printf("�� �ܺ��� �� �ܱ���? ");
	scanf_s("%d %d", &c, &d);
	printf(" = %d\n", gugudan3(c, d));
	return 0;
}