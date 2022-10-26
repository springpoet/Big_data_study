#include<stdio.h>

//포인터, 변수의 주소를 저장하는 타입

void changeValue(int* p, int v)
{
	*p = v;//p가 가르키는 값을 v로 바꾼다.
}
void no_changeValue(int p, int v)
{
	p = v;//이 안에서의 값은 바뀌지만 호출한 함수에서는 바뀌지 않는다.
}
int main()
{
	int ex = 10;
	int* exptr = &ex;
	//int*는 int 타입 변수의 위치를 저장
	//함수의 매개변수에 주로 쓰임
	//scanf 또는 swap

	changeValue(exptr, 100);
	printf("ex = %d\n", ex);
	changeValue(&ex, 500);
	printf("ex = %d\n", ex);
	no_changeValue(&ex, 1000);//안바뀜
	printf("ex = %d\n", ex);
	return 0;
}