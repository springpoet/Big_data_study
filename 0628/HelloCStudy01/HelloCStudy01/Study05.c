#include<stdio.h>
int main()
{
	//기본 사칙연산
	//나머지 연산자

	//+,-,*,/ (*=shift+8)
	//%->나머지 연산자=나눴을 때 나머지
	//%출력시 %% 입력
	printf("%d\n", 10 + 2);
	printf("%d\n", 10 - 2);
	printf("%d\n", 10 * 2);
	printf("%d\n", 10 / 2);
	printf("%d\n", 10 % 2);

	//연산의 우선 순위가 적용됨
	//곱하기 나누기 먼저하고 그 다음에 덧셈 뺄셈 함
	//우선 순위가 헷갈리거나 덧셈 뺄셈 먼저 하고 싶을 경우 괄호로 묶음
	printf("%d\n", 10 + 2 * 5);
	printf("%d\n", (10 + 2) * 5);

	//논리연산
	//숫자를 2진수로 바꿔서 연산하는 것
	//AND(&)
	// 1 & 1 일 경우에만 결과가 1이고 0이 하나라도 들어가면 결과가 0
	// 1 = 참(true) 0 = 거짓(false)
	//OR(|)-> shift + escape 문자
	// AND와 반대로 하나라도 1이 있으면 1
	// 실질적으로 많이 쓰이는건 &&,||을 씀(조건문에서)
	//XOR(^)
	// eXclusive OR. 전부 다 참이거나 전부 다 거짓이면 거짓
	// 하나만 거짓이거나 하나만 참인 경우 참이라고 본다.
	
	printf("and or xor\n");
	printf("%d\n", 9 & 8);
	//9 = 1001
	//8 = 1000
	printf("%d\n", 9 | 8);
	printf("%d\n", 9 ^ 8);

	//bit 연산
	//>> , << shift 연산. 0을 이동시키는 것
	printf("%d\n", 8 << 2);
	//1000 -> 1000 00 -> 32
	//0을 2개 추가
	printf("%d\n", 8 >> 2);
	// 1000 -> 0010 -> 2
	//0을 2개 제거

	return 0;
}