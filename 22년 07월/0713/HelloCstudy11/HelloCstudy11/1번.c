#include<stdio.h>
int main()
{
	int a, b, c;
	printf("�� ���ڸ� �Է��ϼ���. ");
	scanf_s("%d,%d,%d", &a, &b, &c);
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;
		else
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}