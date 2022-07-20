#include<stdio.h>
#include"one.h"
int main()
{
	int x, y, z;
	printf("변수 세개를 입력 ");
	scanf_s("%d %d %d", &x, &y, &z);
	one(x, y, z);
	return 0;
}