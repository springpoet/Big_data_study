#include<stdio.h>
int main()
{
	char c[1024] = { NULL, };// NULL값으로 초기화
	printf("문장을 입력하세요.:");
	gets(c);
	int alphabet[26] = { 0 };
	
	for (int i = 0; c[i] != NULL; i++) //-1 to exclude terminating NULL
	{
		if (c[i] >= 'A' && c[i] <= 'Z') //대문자를 소문자로 변환
		{
			c[i] += ('a' - 'A');
		}
		if (c[i] < 'a' || c[i] > 'z')//!,@... ' '
		{
			if (c[i] == ' ')//스페이스바 두번 해야함
				continue;//공백은 그냥 넘어가기 예외처리
						//continue만 적고 다른거 지우면 프로그램은 종료 안되고 a-z까지만 숫자를 센다.
			printf("잘못된 숫자\n");
			return 0; //break를 해도 상관없따. 그럴 경우 또 다른 변수 만들어야함.
			//break는 이 for문만 빠져나감. return 0;는 프로그램이 아예 종료
		}
		else
		{
			alphabet[c[i] - 'a']++;
			//c문장의 i번째에 위치한 문자에서 -'a'(97)을 하면 0~26사이 값이 나온다.
			//alphabet[i]는 26칸 배열이므로 0=a 1=b '''해서 z=25가된다. 각 자리의 수를 하나씩 더함.
		}

	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] != 0)
			printf(" '%c'는 %d 글자입니다.\n", 'a' + i, alphabet[i]);
	}



	return 0;
}

/*count = c[i] - 'a';
if (count < 26 && count >= 0)
{
	alphabet[count]++;
}
}

for (i = 0; i < 26; i++)
{
	if (alphabet[i]) printf("%c는 %d글자입니다.\n", 'a' + i, alphabet[i]);
}*/