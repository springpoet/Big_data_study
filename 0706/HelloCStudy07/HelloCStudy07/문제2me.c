#include<stdio.h>
int main()
{
	//1.대소문자 변환
	//1)영어를 모두 대문자로 바꿈
	//char eng;
	//printf("영어 입력하세요. ");
	//scanf_s("%c", &eng);
	//if (eng >= 'A' && eng <= 'Z')
	//{
	//	printf("%c=>%c", eng, eng + 32);
	//}
	//else if (eng >= 'a' && eng <= 'z')
	//{
	//	printf("%c=>%c", eng, eng - 32);
	//}
	//else
	//	printf("%c 는 영어가 아닙니다.");
	char eng[100];
	printf("영어를 입력하세요. ");
	gets(eng);
	int i;
	for (int i = 0; eng[i]; i++)
	{
		if (eng[i] >= 65 && eng[i] <= 90)
		{
			eng[i] = eng[i];
		}
		else if (eng[i] >= 97 && eng[i] <= 122)
		{
			eng[i] = eng[i] - 32;
		}
	}
	printf("%s\n", eng);
	//2.
	char eng2[100];
	rewind(stdin);
	printf("영어를 입력하세요. ");
	gets(eng2);
	for (int i = 0; eng2[i]; i++)
	{
		if (eng2[i] >= 65 && eng2[i] <= 90)
		{
			eng2[i] = eng2[i] + 32;
		}
		else if (eng2[i] >= 97 && eng2[i] <= 122)
		{
			eng2[i] = eng2[i];
		}
	}
	printf("%s\n", eng2);
	//3.
	char eng3[100];
	rewind(stdin);
	printf("영어를 입력하세요. ");
	gets(eng3);
	for (int i = 0; eng3[i]; i++)
	{
		if (eng3[i] >= 65 && eng3[i] <= 90)
		{
			eng3[i] = eng3[i] + 32;
		}
		else if (eng3[i] >= 97 && eng3[i] <= 122)
		{
			eng3[i] = eng3[i] - 32;
		}
	}
	printf("%s\n", eng3);
	//4.입력한 문자열을 거꾸로 바꿔서 출력
	char sentense[10];
	rewind(stdin);
	printf("영어를 입력하세요. ");
	gets(sentense);
	for (i = 0; i <= 10; i++)

		printf("%s", sentense[i]);


	return 0;
}