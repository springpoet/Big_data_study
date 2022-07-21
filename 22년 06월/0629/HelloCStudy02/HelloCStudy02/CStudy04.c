#include<stdio.h>
int main()
{
	//1
	printf("몇 초인가요?");
	int sec;
	scanf_s("%d", &sec);
	printf("%d분 %d초\n", sec / 60, sec % 60);

	//2
	printf("2x+b의 해 구하기\n");
	printf("x는?");
	int x, b;//정수 변수 x와 b 선언
	scanf_s("%d", &x);
	printf("b는?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);

	//3
	printf("기분은?");
	rewind(stdin);//char 입력받기 전이므로 rewind, scanf, gets 나오기 전에만 써주면됨
	//char feel = getchar(); 둘 중 하나
	char feel;
	scanf_s("%c", &feel, 1);
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	//gets(mbti);
	scanf_s("%s", mbti, sizeof(mbti));
	printf("혈액형?");
	rewind(stdin);
	char bType[10];
	gets(bType);
	printf("키와 나이?");
	rewind(stdin);
	float cm;
	printf("키?");
	scanf_s("%f", &cm);
	printf("나이?");
	int age;
	scanf_s("%d", &age);
	printf("저의 기분은 %c입니다. 제mbti는 %s이고 혈액형은 %s입니다. 제 키는 %.2f이며, 나이는 %d살 입니다.\n", feel, mbti, bType, cm, age);
	//double로 선언할 때 %lf 로 받아야함
	//숫자는 무조건 scanf_s
	//문자는 getchar, gets 아무거나
	//double cm; 쓸 경우 제일 아래, scanf에서 lf로 변경
	//알집말고 반디집쓰기

	//4,5 printf에 풀어서 풀기, 나눗셈, 나머지 연산 이용.>0630에 이어서 풀이


	printf()





	return 0;
}
