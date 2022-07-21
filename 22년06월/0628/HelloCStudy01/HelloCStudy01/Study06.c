#include<stdio.h>
int main()
{

	//변하는 수
	//컴퓨터에서는 숫자외에 문자 등등도 변수로 봄
	//실수를 저장하는 변수
	int a = 10; //4Byte //처음에 적는 걸 "선언(Declare)"
	a = 100; //a라는 변수가 10에서 100으로 바뀜

	//실수를 저장하는 변수
	double b = 3.14; //8Byte

	//문자를 저장하는 변수(단, 한글 등은 안됨)
	char c = 'A'; //1Byte

	//정수를 저장하는게 long, 실수의 float 등이 있으나 위 3개가 가장 많이 쓰임


	int myBirth = 1995;
	printf("내 나이는 %d살이다.\n", 2023 - myBirth);

	return 0;

}