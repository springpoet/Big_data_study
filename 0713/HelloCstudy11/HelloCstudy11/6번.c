#include<stdio.h>
int multiple(int a, int b)
{
	for (int i = a; i <= b - 1; i++)
	{
		printf("%d*", i);
	}
	printf("%d\n", b);
	int sum = 1;
	for (int i = a; i <= b; i++)
	{
		sum *= i;
	}
	printf("total = %d\n", sum);
}
int main()
{
	int a, b;
	printf("�� ���� �Է��ϼ���.");
	scanf_s("%d,%d", &a, &b);

	multiple(a, b);

}