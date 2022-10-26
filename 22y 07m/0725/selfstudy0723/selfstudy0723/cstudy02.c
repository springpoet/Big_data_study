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

int inputNum()
{
	int a;
	scanf_s("%d", &a);
	return a;
}
void printNum(int a)
{
	printf("%d\n", a);
}
int main()
{
	int num1 = 100;
	int num2 = 200;
	no_changeValue(&num1, &num2);
	printf("%d, %d\n", num1, num2);

	int a = 3;
	int b = 5;
	printf("전 : %d, %d\n", a, b);
	swap(&a, &b);
	printf("후 : %d, %d\n", a, b);

	int x;
	int y;
	printf("두 수를 입력하세요. ");
	scanf_s("%d %d", &x, &y);
	printf("전 : %d, %d\n", x, y);
	swap(&x, &y);
	printf("후 : %d, %d\n", x, y);

	int aa = inputNum();
	int bb = inputNum();
	printNum(aa);
	printNum(bb);
	swap(&aa, &bb);
	printNum(aa);
	printNum(bb);



	return 0;
}