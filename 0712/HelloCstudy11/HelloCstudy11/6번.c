#include<stdio.h>
int multiple(int a, int b)
{
	for (int i = a; i <= b; a++)
	{
		printf("*%d", i);
	}
	int sum;
	sum = 1;
	for (int i = a; i < b; a++)
	{
		sum *= i;
		printf("total=%d", sum);
	}
	return sum;
}
int main()
{
	int c, d;
	printf("�� ���� �Է��ϼ���.");
	scanf_s("%d,%d", &c, &d);
	multiple(c, d);

	return 0;
}