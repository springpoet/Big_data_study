#include<stdio.h>
int main()
{
	//2. 문자열 2개 입력받고 2개가 같은지 여부를 출력
	//문자열=문장 혹은 string이라고 함
	char c = 'A';
	char mbti[5] = "ISFP";
	char* m = mbti;
	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B';
	//bType[2] = NULL 
	printf("%c", bType);
	char bloodType[3] = "AB";
	char name[7] = "김성근";

	//문자열 입력받기
	printf("mbti는?\n");
	gets(mbti);

	//문자 입력받기
	printf("알파벳 하나 입력하기");
	rewind(stdin);//위에서 입력받을 때 \n버퍼가 남아 있기 때문에 제거해야함.
	//gets()뒤에는 할 필요없음.
	c = getchar();
	printf("%s %c", mbti, c);

	printf("다시 문자 입력");
	c = getchar();
	printf("c=%c\n", c);
	//rewind 안 넣으니까 \n이 getchar에 들어가버림.
	//숫자만 입력받을때는 rewind 안써도 됨. 문자나 문자열 입력시 필요.
	//숫자나, 문자, 문자열과 같은 데이터를 입력하고 나서 그 뒤에 문자나
	//문자열을 또 입력할 경우 쓰임.
	//scanf나 getchar를 한 번이라도 수행한 상태에서 바로 다음에 뭔가 입력 받아야 될 경우에 쓰임
	//참고로 직전에 gets로 문장을 입력받았다면 그 땐 안써도 됨

	return 0;
}