#include<stdio.h>
int main()
{
	char c = 'A';
	char* ptr_c = &c;//ptr_c는 글자a를 저장하는 변수 c의 위치를 저장
	char* name = "김성근";//김성근이라는 글자(7바이트)를 저정하는 메모리의 위치
	//=char name[7]="김성근"
	//""안에 문장을 적으면 NULL값 까지 포함

	char myname[100] = "김성근";


	return 0;
}