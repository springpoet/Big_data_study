#include<stdio.h>

char* q1_thee(int year)
{
	char thee[12];
	switch (year % 12)
	{
	case 0:
		return "¿ø¼þÀÌ ¶ì\n";
	case 1:
		return "´ß ¶ì\n";
	case 2:
		return "°³ ¶ì\n";
	case 3:
		return "µÅÁö ¶ì\n";
	case 4:
		return "Áã ¶ì\n";
	case 5:
		return "¼Ò ¶ì\n";
	case 6:
		return "È£¶ûÀÌ ¶ì\n";
	case 7:
		return "Åä³¢ ¶ì\n";
	case 8:
		return "¿ë ¶ì\n";
	case 9:
		return "¹ì ¶ì\n";
	case 10:
		return "¸» ¶ì\n";
	case 11:
		return "¾ç ¶ì\n";
	default:
		return -1;
	}
}
int q2_thee(int year)
{
	char thee[12];
	switch (year % 12)
	{
	case 0:
		return "¿ø¼þÀÌ ¶ì\n";
	case 1:
		return "´ß ¶ì\n";
	case 2:
		return "°³ ¶ì\n";
	case 3:
		return "µÅÁö ¶ì\n";
	case 4:
		return "Áã ¶ì\n";
	case 5:
		return "¼Ò ¶ì\n";
	case 6:
		return "È£¶ûÀÌ ¶ì\n";
	case 7:
		return "Åä³¢ ¶ì\n";
	case 8:
		return "¿ë ¶ì\n";
	case 9:
		return "¹ì ¶ì\n";
	case 10:
		return "¸» ¶ì\n";
	case 11:
		return "¾ç ¶ì\n";
	default:
		return -1;
	}
}
int main()
{
	//1¹ø.
	int year1;
	printf("Q1 : ¸î ³â »ý? ");
	scanf_s("%d", &year1);
	printf("%s", q1_thee(year1));
	
	//2¹ø.
	int year2;
	printf("Q2 : ¸î ³â »ý? ");
	scanf_s("%d", &year2);
	printf("%s", q2_thee(year2));



	return 0;
}