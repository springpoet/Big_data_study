#include<stdio.h>
#include"eight.h"

int main()
{
	int a;
	printf("몇까지를 곱할까요");
	scanf_s("%d", &a);
	eight(a);

	return 0;
}