#include<stdio.h>
int main()
{
	int a = 10;
	//lld= long lon 타입
	//&a = a의 주소
	printf("%d, %lld", a, &a);
	//&a 값은 프로그램 시작할 때 마다 값이 바뀜
	//이 프로그램이 꺼지면 a가 사라지고 켜지면 다시 메모리 할당하기 때문
	//포인터:변수의 주소를 저장
	int* ptr_a = &a;
	int * ptr_a2 = &a;
	int *ptr_a3 = &a;
	
	int* ptr_aa = 10;
	*ptr_aa = 0;
	printf("%d", *ptr_aa);


	double b = 3.14;
	double* b_ptr = &b;

	char c = 'A';
	char* ptr_c = &c;//ptr_c는 글자a를 저장하는 변수 c의 위치를 저장
	char* name = "김성근";//김성근이라는 글자(7바이트)를 저정하는 메모리의 위치
						//""안에 문장을 적으면 NULL값 까지 포함

	char myname[100] = "김성근";


	printf("%c %s %s", c, ptr_c, name);


	return 0;
}