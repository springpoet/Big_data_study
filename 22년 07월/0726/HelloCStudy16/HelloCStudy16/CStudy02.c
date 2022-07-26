#include<stdio.h>
void noSwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 3;
	int b = 5;
	noSwap(&a, &b);
	printf("%d %d\n", a, b);
	int* pa = &a;
	int* pb = &b;
	Swap(pa, pb);
	printf("%d %d\n", a, b);
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}