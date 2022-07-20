#include<stdio.h>
int main()
{
	//숫자 체계
	//%d => decimal(10진수), 정수=소수점이 없는 숫자
	//%f => float(실수)
	//%c => charactor : 문자(1글자), 따옴표 사용
	//%s => string : 문자열(여러 개의 문자), 쌍따옴표 사용
	printf("%d ", 1+1);
	printf("%f ", 1.0 / 3);
	printf("%f ", 1 / 3);
	printf("%d ", 1 / 3);
	printf("%c ", 'A');
	//아스키 코드상으로 A=65
	printf("%d ", 'A');
	printf("%s ", "김성근");
	printf("%c  \n", '가');
	printf("내 이름은 %s입니다.\n", "김성근");
	printf("내 혈액형은 %c입니다.\n", 'B');
	printf("내 나이는 %d살이고 나는 %d년생입니다.\n", 28, 1995);
	printf("내 MBTI는 %s이고, 내 키는 %f입니다.\n", "ISFP", 175.0);
	printf("내 별명은 \"%s\"입니다.\n", "아아충");

	return 0;
}