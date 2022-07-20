#include<stdio.h>
int main()
{
	//포인터=변수의 주소
	//배열을 설명하기 위한 빌드업
	int a = 10;
	int* ptr_a = &a;//컴퓨터 어딘가에 있는 a의 위치
	(* ptr_a)++;
	printf("a=%d\n", a);
	a++;
	printf("ptr_a가 가르키는 곳의 값: %d\n", *ptr_a);
	printf("a=%d\n", a); //b=13 a=12
	/* 변수 설명
	int b = a;
	b++;
	printf("a=%d\n", a);
	*/
	//ptr_a=&a=a의 주소(위치), *ptr_a=ptr_a위치의 값=즉 a.
	//(*ptr_a)++=ptr_a위치의 값을 증가시킴









	return 0;
}