#include<stdio.h>
int main()
{
	//1.알파벳 A부터 Z까지 출력하기(대문자)
	for (char a = 'A'; a < 'Z'; a++)
		printf("%c", a);

	//2. 소문자 나열
	for (char a = 'a'; a < 'z'; a++)
		printf("%c", a);
	//3.Aa 순서대로 나열
	for (char a = 'A'; a <= 'z'; a++)
	{
		if (a <= 'Z' || a >= 'a')//아스키코드 상 대소문자 사이 특수문자 제거
			printf("%c", a); 
	}







	return 0;
}