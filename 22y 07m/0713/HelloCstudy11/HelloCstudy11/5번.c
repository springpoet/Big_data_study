#include<stdio.h>
int number(int a)
{
		int sum;
	if (a <= 0)
		printf("0���� ���� �� ");
	else
	{
		printf("1");
		sum = 0;
		for (int i = 1; i <= a; i++)
		{
			sum += i;
		}
		int b;
		b = 2;
		while (b <= a)
		{
			printf("+%d", b);
			b++;
		}
		printf("=%d", sum);
	}
		return sum;
}

int main()
{
	int c;
	printf("1���� ������ �� �Ҳ���?");
	scanf_s("%d", &c);
	number(c);

	return 0;

}