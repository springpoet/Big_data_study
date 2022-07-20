#include<stdio.h>
int main()
{
	// int a = 10;
	// int ptr_a = &a;
	// &a는 10이 있는 주소.
	// int* ptr_a = 10;
	// *ptr_a= ptr_a의 위치의 값=&a 위치의 값= a = 10
	// ptr_a = &a
	int numbers[6] = { 0, };//{0,}; <-0으로 초기화
	char mbti[5] = "ISFP";

	int* ptr_n = numbers; //*ptr_n은 numbers의 값 =0,0,0,0,0,0
	char* m = mbti; // *m은 mbti의 값="ISFP"

	*m = 'E';
	*ptr_n = 100;
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);
	//*ptr_n=100은 numbers의 첫문자를 100으로 바꾸는 것과 같다. 
	//따라서 원래 {0,0,0,0,0,0}인 상태에서 {100,0,0,0,0,0(으로 바뀐 것)
	//그렇기 ??문에 출력시 [0]=100,[1]=0 ...[5]=0이 출력됨

	printf("%s\n", mbti);
	//*m='E'는 위 mbti에서 첫 문자를 E로 바꾼다는 것과 같다.
	//따라서 원래{I,S,F,P}인 상태에서 {E,S,F,P}로 바뀜
	//그렇기 때문에 출력시 'ESFP'로 된다.

	scanf_s("%d", &numbers[1]);
	//scanf_s에서 입력 받을 때는 \n를 넣으면 안된다.
	//numbers의 위치의 2번째 문자를 의미. [0]이 첫 문자.
	// 첫 문자를 뭘로 바꿀 건지 상수(%d)로 나타내라
	//scanf_s("%d", numbers + 2);
	//numbers=ptr_n이기때문에 
	//numbers+2=ptr_n+2=numbers의 주소에 3번째 바꿀 문자를 출력하라는 뜻
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	printf("mbti를 바꿔보자");
	gets(m);
	printf("%s\n", mbti);
	printf("%s\n", m);
	//m은 mbti의 값이다. 
	//원본이 ISFP와 같은 문자였기 때문에 되는것.

	return 0;
}