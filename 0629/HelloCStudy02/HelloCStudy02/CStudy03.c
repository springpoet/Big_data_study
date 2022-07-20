#include<stdio.h>
int main()
{
	//문자 입력에는 2가지 방법이 있다
	char c;
	printf("내 기분은 오늘 +? -? 0?\n");
	scanf_s("%c", &c, 1); //숫자는 입력받을 변수의 메모리 크기 Byte 여기서 &는 address
	printf("오늘 내 기분은 %c입니다.\n", c);
	rewind(stdin); //버퍼 공간 청소, 엔터도 문자이다(LF)
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);
	rewind(stdin);
	printf("내 이름의 첫 글자는?");
	c = getchar();
	printf("%c\n", c);
	printf("내 이름의 끝 글자는?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	//배열은 안배웠지만..
	char name[100]; //name 변수는 100Byte 저장가능
	//문자열 입력 받을 때 넉넉하게 범위 저장하면 됨,
	//만약 딱 맞게 지정하고 싶다면 입력하고자 하는 Byte+1 만큼 지정
	//ex. 한글 3글자 입력 할 경우 [7], 영어 10글자 입력할 경우[11]
	//java, c#, c++에선 string 이라는 자료형이 있지만 c에는 없다.
	//제대로 이해하려면 배열, 포인터를 모두 배워야함

	printf("이름은?");
	scanf_s("%s", name, sizeof(name)); //문자열을 받을 때는 name 앞에 & 하지않음
	printf("내 이름은 %s입니다.\n", name);
	rewind(stdin); //문자열도 마찬가지로 다음에 또 입력받을 때는 rewind 해줘야함
	char mbti[100];
	printf("mbti?");
	gets(mbti); //통상적으로 많이 쓰임
	//scanf_s에서는 space bar가 짤림 (영문도 안됨)
	printf("내 mbti는 %s입니다.\n", mbti);
	//null:아무것도 없는 것

	return 0;
}