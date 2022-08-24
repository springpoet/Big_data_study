#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("두 수를 입력하세요. : ");
	scanf_s("%d %d", &a, &b);
	printf("%0.9f", (double)a/b);
	return 0;
}