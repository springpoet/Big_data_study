#include<stdio.h>
#include"five.h"
int main()
{
	printf("어디까지 더할지 정하시오 ");
	int n1;
	scanf_s("%d", &n1);
	five(n1);

	return 0;
}
