#include<stdio.h>
int main()
{
	//반복문에 대해 더 알아보기
	//1. for 문 무한루프 만들기
	//for (;;)
	//for(int i=0; i<1;)
	for (int i = 0;; i++)
	{
		printf("%d\n",i);
		break;
	}

	//2.while문도 중첩이 되므로 while문으로 구구단 짤 수 있다.
	char name[100];
		printf("이름?");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++) // \0=NULL
		printf("%c", name[i]);
	//모든 문자열의 끝은 NULL이므로 이 문자열을 끝까지 다 읽은 것

	return 0;
}