#include<stdio.h>
int main()
{
	int a, b, c;
	printf("세 숫자를 입력하세요. ");
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