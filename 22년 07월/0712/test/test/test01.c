#include<stdio.h>
int number(int a)
{
	if (a <= 0)
		printf("����");
	else
	{
		int sum = 0;
		for (int i = 1; i <= a; i++)
		{
			sum += i;
		}
		printf("1");
		int b;
		b = 1;
		while ( b != a)
		{
			printf("+%d", a);
			b++;
		}
		return sum;
	}
}

int main()
{
	int c;
	printf("1���� ������ �� �Ҳ���?");
	scanf_s("%d", &c);
	number(c);

	return 0;

}