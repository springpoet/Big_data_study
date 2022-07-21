#include<stdio.h>
int main()
{
	int a, b, c;
	printf("입력하시오. ");
	scanf_s("%d %d %d", &a, &b, &c);
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