#include<stdio.h>
#include"nine.h"
int main()
{
	int n;
	printf("����� ��? ");
	scanf_s("%d", &n);
	nine(n);
	printf("\n");
	return 0;
}
