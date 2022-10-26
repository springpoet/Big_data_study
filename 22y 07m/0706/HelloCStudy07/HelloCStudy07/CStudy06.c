#include<stdio.h>
int main()
{
	//1.
	printf("첫번째 문장 입력. ");
	char s1[1024];
	int diff = 'a' - 'A';
	gets(s1);
	for (int i = 0; s1[i] != NULL; i++) //NULL값이 나올때까지만 읽음(NULL은 문자열의 마지막이기 때문)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= diff;
			//s1[i] -= 32;
		}
	}
	printf("%s", s1);
	//2.
	printf("첫번째 문장 입력. ");
	gets(s1);
	for (int i = 0; s1[i] != NULL; i++) //NULL값이 나올때까지만 읽음(NULL은 문자열의 마지막이기 때문)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += diff;
			//s1[i] += 32;
		}
	}
	printf("%s", s1);

	//3.
	printf("문장 다시 입력해보세요");
	char s2[1024];
	gets(s2);
	for (int i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] += diff;
		else if (s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] -= diff;
	}
	printf("%s\n", s2);

	//4.역순출력
	char r[1024];
	int index = 0;//문자열의 길이?
	int count = 0;
	while (s2[index] != NULL)
		index++;//ex)abcdd일시 index=5까지 진행됨
	//index가 s2의 문장 끝(NULL)을 만나면 끝
	//abc 입력하면 abc'\0'이렇게 되는데
	//index-1이면 c를 가리킴.

	//i--하면서 첫번째 글자까지 읽음
	//count는 r배열의 인덱스.
	//s2에 있는 글자를 뒷부분부터 가져와야하는데 r배열의 앞부분부터 채워야함

	for (int i = index - 1; i >= 0; i--, count++) //총 5공간을 뒤(-1은 널값 제외)에서 부터 하나씩 줄이며 읽어냄
	{
		printf("%c", s2[i]);//거꾸로 된 거 출력
		r[count] = s2[i];//거꾸로 된 거 쌓기. 위에꺼는 뒤에서부터 읽고 밑에 것은 읽은 순서대로 적어냄.
	}
	r[count] = NULL;//문자열 끝에 널값을 꼭 추가해야됨.
	printf("\n%s\n", r);

	return 0;
}