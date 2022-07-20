#include<stdio.h>
#include"nine.h"
int main()
{
	int n;
	printf("¸î±îÁö °ö? ");
	scanf_s("%d", &n);
	nine(n);
	printf("\n");
	return 0;
}
