#include<stdio.h>
extern int a;//CTest.c에서 온 변수 a

void printNum(int);
int main()
{
	//b++;//여기서 문제! static 붙어서 CTest.c 밖에선 사용 불가
	a++;
	printf("%d\n", a);
	up_Print();
	return 0;
}


void printNum(int a)//함수의 원형을 위에 쓰고 정의를 밑에 쓰기도 함
{
	printf("\n%d", a);
}