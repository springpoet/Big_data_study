#include<stdio.h>
char Thee(int year)
{
	int Thee = year % 12;
	switch (Thee)
	{
	case 0:
		printf("¿ø¼şÀÌ ¶ì\n");
		break;
	case 1:
		printf("´ß ¶ì\n");
		break;
	case 2:
		printf("°³ ¶ì\n");
		break;
	case 3:
		printf("µÅÁö ¶ì\n");
		break;
	case 4:
		printf("Áã ¶ì\n");
		break;
	case 5:
		printf("¼Ò ¶ì\n");
		break;
	case 6:
		printf("È£¶ûÀÌ ¶ì\n");
		break;
	case 7:
		printf("Åä³¢ ¶ì\n");
		break;
	case 8:
		printf("¿ë ¶ì\n");
		break;
	case 9:
		printf("¹ì ¶ì\n");
		break;
	case 10:
		printf("¸» ¶ì\n");
		break;
	case 11:
		printf("¾ç ¶ì\n");
		break;
	default:
		break;
	}
}
char ganzi(int year)
{
	char a[12][2048] = { "½Å","À¯","¼ú","ÇØ","ÀÚ","Ãà","ÀÎ","¹¦","Áø","»ç","¿À","¾ç" };
	char b[10][2048] = { "°æ","½Å","ÀÓ","°è","°©","À»","º´","Á¤","¹«","±â" };
	int x = year % 12;
	int y = year % 10;
	printf("ÅÂ¾î³­ ³âµµÀÇ °©ÀÚ´Â %s%s³âÀÌ´Ù.\n", b[y], a[x]);
}

char* season(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "°Ü¿ï\n";
	case 3:
	case 4:
	case 5:
		return "º½\n";
	case 6:
	case 7:
	case 8:
		return "¿©¸§\n";
	case 9:
	case 10:
	case 11:
		return "°¡À»\n";
	default:
		return "ÀÌ»óÇÑ »ç¶÷\n";
	}
}
int char_length(char* length)
{
	rewind(stdin);
	int count = 0;
	for (int i = 0; length[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
int main()
{
	//1¹ø.
	int myYear;
	printf("ÅÂ¾î³­ ³âµµ? ");
	scanf_s("%d", &myYear);
	Thee(myYear);

	//2¹ø.
	ganzi(myYear);

	//3¹ø.
	int month;
	printf("ÅÂ¾î³­ ¿ùÀº? ");
	scanf_s("%d", &month);
	printf("%s", season(month));

	//4¹ø.
	char length[1024];
	rewind(stdin);
	printf("¹®ÀÚ¿­À» ÀÔ·ÂÇÏ¼¼¿ä ");
	gets(length);
	int result = char_length(length);
	printf("%d\n", result);

	return 0;
}