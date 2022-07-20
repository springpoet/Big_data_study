#include<stdio.h>
void ww(); //재귀함수 선언
int main()
{
	ww();  //함수 호출
	return 0;
}


void ww() //재귀함수 정의
{
	printf("날씨\n");

	ww();  //자신을 다시 호출
}


