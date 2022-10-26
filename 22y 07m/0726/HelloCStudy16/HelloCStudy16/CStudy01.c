#include<stdio.h>


int main()
{
	int a = 10;
	int* ptr = &a;

	(*ptr)++;
	(*(&a))++;
	
	printf("a = %d\n", a);
	return 0;
}