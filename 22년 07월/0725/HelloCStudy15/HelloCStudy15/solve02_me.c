#include<stdio.h>
int changeNum(int* a, int* b)
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
int printNum(int a)
{
	printf("%d\n", a);
}
int main()
{
	int a = 3;
	int b = 5;
	printf("전 : %d, %d\n", a, b);
	changeNum(&a, &b); 
	//그냥 a,b만 입력할 경우 3, 5라는 숫자만 들어감
	//우리가 원하는건 a,b의 값을 바꾸는 것이기 때문에 &를 붙여
	//해당 주소의 값을 바꾸고자 함
	printf("후 : %d, %d\n", a, b);

	int num1;
	int num2;
	printf("두 수를 입력하세요. ");
	scanf_s("%d %d", &num1, &num2);
	printf("전 : %d %d\n", num1, num2);
	changeNum(&num1, &num2);
	printf("후 : %d %d\n", num1, num2);


	int num3 = inputNum();
	int num4 = inputNum();

	printNum(num3);
	printNum(num4);

	changeNum(&num3,&num4);

	printNum(num3);
	printNum(num4);
	return 0;
}