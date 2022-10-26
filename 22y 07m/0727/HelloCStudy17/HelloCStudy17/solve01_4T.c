
#include<stdio.h>
	//3번.
char* season(int month)
{
	switch (month)
	{
	case 12: 	
	case 1: 	
	case 2: 
		return "겨울";   
	case 3:	
	case 4:	
	case 5:
		return "봄";
	case 6:	
	case 7:	
	case 8:
		return "여름";
	case 9:	
	case 10: 
	case 11:
		return "가을";
	default:
		return "오류";
	}
}
	//4번.
int length(char* str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

int main()
{
	//3번 메인.
	int month;
	printf("몇 월인가요? ");
	scanf_s("%d", &month);
	printf("%s\n", season(month));
	
	//4번 메인.
	char self[1024];
	rewind(stdin);
	printf("문자열 입력하세용 ");
	gets(self);
	printf("%d\n", length(self)); //8
	return 0;
}