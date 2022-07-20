#include<stdio.h>
#include<stdlib.h>//system 함수를 사용하게 해주는 헤더

void color()
{
	system("color 7a");
}
int main()
{
	color();
	printf("3번 문제입니다.");

	return 0;
}