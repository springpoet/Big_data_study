#include<stdio.h>
int g = 0; //전역변수, 글로벌 변수 라고도 함 

//지역변수를 매개
//변수 l은 updl 끝나면 없어짐
//값만 가져와서 ++함
void up1(int l)
{
	l++;
}
//지역변수의 위치(포인터)를 매개
//주소지(위치) 가져옴 얘가 변하면 원래의 값도 바뀜
void up2(int* l)
{

	(*l)++;
}
//지역변수에 접근하고 있음.
void up3()
{
	g++;
}
int main()
{
	int local = 10;
	up1(local);
	printf("local=%d\n", local);
	up2(&local);
	printf("local=%d\n", local);
	up3(g);
	printf("g=%d\n", g);
}