#include<stdio.h>
int fact(int num)
{
	//재귀함수는 반드시 완전히 종료되는 시점을 적어줘야 함
	if (num <= 1)
		return 1;//종료 시점.

	return num * fact(num - 1);
}
int main()
{
	printf("%d", fact(5));

	return 0;
}