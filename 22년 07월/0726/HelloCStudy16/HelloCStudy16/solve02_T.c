#include<stdio.h>


int gugudan_sum()
{
	int sum = 0;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			sum += (i * j);
	}
	return sum;
}

void Q2_dan_print(int dan)
{
	for (int i=1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}

void Q3_gugu_multipe(int s, int e)
{
	/*���� s�� �� ũ�ٸ� �ٲ��� �� �ִ�.
	if (s > e)
	{
		int temp = s;
		s = e;
		e = temp;
	}*/
	for (int i = 2; i <= 9; i++)
	{
		for (int j = s; j <= e; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int gugu_sum2(int a, int b)
{

	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			sum += (i * j);
		}
		printf("\n");
	}
	return sum;
}
int main()
{
	//1.
	printf("�� : %d\n", gugudan_sum());

	//2.
	int dan;
	printf("q2\n");
	scanf_s("%d", &dan);
	Q2_dan_print(dan);

	//3.
	int s;
	int e;
	printf("�� ���� �� ������ ��? ");
	scanf_s("%d %d", &s, &e);
	Q3_gugu_multipe(s, e);

	//4.
	int start;
	int end;
	printf("�� ���� �� ������ ��? ");
	scanf_s("%d %d", &start, &end);
	printf("4�� ��� : %d\n", gugu_sum2(start, end));

	return 0;
}