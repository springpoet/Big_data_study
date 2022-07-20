#include<stdio.h>
#include"mytest.h"//헤더파일 불러오기.
#include"yourtest.h"
/*함수의 선언.
1. 함수의 정의(선언)을 main위에 적는다.
2.함수의 원형(헤드)부분만 main 위에 적고 정의는 main 아래에 적는다.
-원형에는 ;붙이지만 정의에는 붙이지 않음
3-1.헤더 파일에 함수 정의하고 헤더 파일에 있는 내용을 불러온다.
3-2.헤더 파일에는 원형만 가져오고 정의는 다른 소스파일에서 불러온다.
*/
void test(); //원형(반환형, 매개변수, 형태)
int main()
{
	test();
	mytest();
	yourTypeTest(10);
}
void test()//정의
{
	printf("함수 테스트.");

}