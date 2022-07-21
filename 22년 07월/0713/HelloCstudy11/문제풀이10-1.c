#include<stdio.h>
#include"ten.h"

int main()
{
    printf("몇 번째 출력할 수?: ");
    int n;
    scanf_s("%d", &n);
    ten(n);
	return 0;
}