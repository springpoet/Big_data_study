#include<stdio.h>
int number(int a)
{
	if (a <= 0)
		printf("실패");
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
	printf("1부터 어디까지 더 할꺼니?");
	scanf_s("%d", &c);
	number(c);

	return 0;

}