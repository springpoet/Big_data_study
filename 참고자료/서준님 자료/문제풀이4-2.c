#include<stdio.h>
#include<Windows.h>
void four(char a[100])
{
	system(a);
	printf("감사합니다.");
}
int main()
{
	/*
	char a[100];
	printf("문자열을 입력하시오");
	gets(a);
	four(a);
	return 0;*/
	
	int aa;
	printf("숫자입력");
	scanf_s("%d", &aa);
	system("color %d", aa);
}