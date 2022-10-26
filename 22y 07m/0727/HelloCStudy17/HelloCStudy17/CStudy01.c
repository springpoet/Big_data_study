#include<stdio.h>
void printYourName(char n[])//char* n 써도 됨
{
	printf("당신의 이름은 %s입니다.\n", n);
}
char* printABC()
{
	return "abc\n";
}

//매개변수 없이 문자열을 입력받아서 리턴 할 때(안 됨)
char* returnMyInfo()
{
	static char mbti[5];
	//static이 없으면 함수에서 받은 값은 함수가 끝나면 사라짐.
	//포인터를 적어 위치를 가르키면 이미 사라진 위치이기 때문에 이상한 값이 나옴.
	//static을 적어 데이터 영역에 보관해야 한다.
	printf("mbti? ");
	gets(mbti);
	return mbti;
}

char* returnMyMBTI(char* mbti)
{
	return mbti; //매개변수로 받은 걸 바로 리턴 할 때(됨)
}
int main()
{
	printf("이름 입력 ");
	char name[100];
	gets(name);
	printYourName(name);
	printf("%s", printABC());

	printf("%s\n", returnMyInfo());
	printf("%s\n", returnMyMBTI("ISFP"));//귀찮아서 scanf 생략하고 바로 입력
	printf("%s\n", returnMyMBTI(name));

	return 0;
}