#include<stdio.h>

void q11_season()
{
	int month;
	printf("Q11 : ¸î ¿ù? ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("°Ü¿ï\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("º½\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("¿©¸§\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("°¡À»\n");
		break;
	default:
		printf("¹º°¡ Àß¸øµÊ\n");
		break;
	}
}
void q12_season(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("°Ü¿ï\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("º½\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("¿©¸§\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("°¡À»\n");
		break;
	default:
		printf("¹º°¡ Àß¸øµÊ\n");
		break;
	}
}
int q13_age()
{
	int year;
	int age;
	printf("Q13 : ¸î ³â»ý? ");
	scanf_s("%d", &year);
	age = 2022 - year + 1;
	return age;
}
int q14_age(int year)
{
	return 2022 - year + 1;
}
int main()
{
	//10¹ø.
	int month;
	printf("Q10 : ¸î ¿ù? ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("°Ü¿ï\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("º½\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("¿©¸§\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("°¡À»\n");
		break;
	default:
		printf("¹º°¡ Àß¸øµÊ\n");
		break;
	}
	//11¹ø.
	q11_season();

	//12¹ø.
	int month12;
	printf("Q12: ¸î ¿ùÀÓ? ");
	scanf_s("%d", &month12);
	q12_season(month12);

	//13¹ø.
	printf("%d\n", q13_age());

	//14¹ø.
	int age14;
	printf("Q14 : ¸î ³â»ý? ");
	scanf_s("%d", &age14);
	printf("%d\n", q14_age(age14));
	return 0;
}
switch (year % 12)
{
case 0:
	printf("¿ø¼þÀÌ ¶ì\n");
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
	printf("³Ê´Â ´©±¸?\n");
	break;
}