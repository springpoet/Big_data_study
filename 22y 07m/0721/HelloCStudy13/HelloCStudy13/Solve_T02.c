#include<stdio.h>

//가장 쉬운 방법
int a;
int b;

void g_swap()
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(int* a, int* b)//넘겨받은 주소지
{
	int temp = *a;//주소지의 값
	*a = *b;
	*b = temp;
}
int main()
{
	printf("숫자 두 개 입력 ");
	scanf_s("%d,%d", &a, &b);
	printf("전 : %d, %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("후 : %d, %d\n", a, b);
	g_swap();
	printf("한번 더 : %d, %d\n", a, b);

	int num1, num2;
	printf("num1, num2에 값 넣기\n");
	scanf_s("%d,%d", &num1, &num2);
	swap(&num1, &num2);//num1, num2의 주소지(위치)를 넘겨 줌
	printf("결과 : %d,%d\n", num1, num2);

	return 0;
}