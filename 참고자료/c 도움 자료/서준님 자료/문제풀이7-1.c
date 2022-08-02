#include<stdio.h>
#include"seven.h"

int main()
{
	int n1, n2;
		char k;
	printf("두 수와 연산자를 입력하시오!");
	scanf_s("%d %d %c", &n1, &n2, &k);
	seven(n1, n2, k);

	return 0;
}