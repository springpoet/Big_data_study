#include<stdio.h>
#define MAX 1024//매크로 상수 선언, 변수로는 크기 지정 안됨(malloc,calloc써야함)
int main()
{
	//2.알파벳 최초 등장 위치
	char input[MAX] = { NULL };
	printf("문장을 입력\n");
	gets(input);
	int charAlpha[26] = { 0 };
	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] += ('a' - 'A');
		 if (input[i] < 'a' || input[i]>'z') 
			 //else if 가 아니라 if해야함.
			 //else if 할 경우 대문자는 인식을 안함.
			continue;//영문자만 센다 나머진 스킵.
		else
		{
			if (charAlpha[input[i] - 'a'] == 0)
				charAlpha[input[i] - 'a'] = i + 1;
			//첫등징 시 0이 아닌 1을 넣어야 하므로 i+1를 넣는다
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("%c는 %d번째 최초 등장\n", 'a' + i, charAlpha[i]);
	}
	return 0;
}