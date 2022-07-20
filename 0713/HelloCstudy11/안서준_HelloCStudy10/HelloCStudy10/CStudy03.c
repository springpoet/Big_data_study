#include<stdio.h>
#include"mytest.h"
#include"yourtest.h"

void test();  //원형 (반환형 매개변수 형태)

int main() {

	test();
	mytest(); 
	yourtypeTest(10);
}


void test() {  //정의
	printf("함수 테스트\n");
}