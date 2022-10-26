#include<stdio.h>
void no_changeValue(int a, int b)
{
	a = b;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1 = 3;
	no_changeValue(num1, 300);
	printf("a=%d\n", num1);

	int a = 3;
	int b = 5;
	swap(&a, &b);
	printf("%d, %d", a, b);

	return 0;
}