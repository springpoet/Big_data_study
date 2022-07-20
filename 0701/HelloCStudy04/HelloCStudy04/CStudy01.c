#include<stdio.h>
#define °¡À§ 0 //¸ÅÅ©·Î »ó¼ö
#define ¹ÙÀ§ 1 

//¿­°ÅÇü
//»çÀüÆò°¡¿¡ ³ª¿Â ¹®Á¦

enum ½ÊÀÌÁö½Å
{
	¿ø¼þÀÌ, ´ß, °³, µÅÁö, Áã, ¼Ò , È£¶ûÀÌ, Åä³¢, ¿ë, ¹ì, ¸», ¾ç//¿ø¼þÀÌ¿¡ 0ºÎ¿© ÈÄ Âß ++µÊ
};//or Áã=4,¼Ò,È£¶ûÀÌ,Åä³¢,¿ë,¹ì,¸»,¾ç,¿ø¼þÀÌ=0,´ß,°³,µÅÁö(Áã¿¡ 4 ºÎ¿© ÈÄ Âß ++µÇ´Ù°¡ ¿ø¼þÀÌ¿¡ 0 ºÎ¿© ÈÄ ++)
int main()
{
	const int º¸ = 2; //»ó¼ö=º¯ÇÏÁö ¾Ê´Â °ª »ó¼ö´Â ¿µ¾î ´ë¹®ÀÚ·Î Àû´Â°Ô °ü·Ê
	if (0)
	{

		//1.
		int month;
		printf("¸î ¿ù?\n");
		scanf_s("%d", &month);

		//1-1.if¹®
		if (month == 1 || month == 2 || month == 12)
			printf("°Ü¿ï\n");
		else if (month >= 3 && month <= 5)
			printf("º½\n");
		else if (month >= 6 && month <= 8)
			printf("¿©¸§\n");
		else if (month >= 9 && month <= 11)
			printf("°¡À»\n");
		else
			printf("¿À·ù ¸Þ¼¼Áö\n");
		//1-2. switch¹®
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
			printf("¿À·ù ¸Þ¼¼Áö\n");
			break;
		}
	}

	if (0)
	{


		//2-1. ¼ýÀÚ °¡À§¹ÙÀ§º¸
		printf("°¡À§ ¹ÙÀ§ º¸? (player1)");
		int p1, p2;
		scanf_s("%d", &p1);
		printf("°¡À§ ¹ÙÀ§ º¸? (player2)");
		scanf_s("%d", &p2);
		p1 %= 3; //3À¸·Î ³ª´« ³ª¸ÓÁö °ª
		p2 %= 3;

		switch (p1)
		{
		case 0://°¡À§
			switch (p2)
			{
			case 0:
				printf("p2:°¡À§\n");
				printf("ºñ±è\n");
				break;
			case 1:
				printf("p2:¹ÙÀ§\n");
				printf("Áü\n");
				break;
			case 2:
				printf("p2:º¸\n");
				printf("ÀÌ±è\n");
				break;
			default:
				break;
			}
			break;
		case 1: //¹ÙÀ§
			switch (p2)
			{
			case 0:
				printf("p2:°¡À§\n");
				printf("ÀÌ±è\n");
				break;
			case 1:
				printf("p2:¹ÙÀ§\n");
				printf("ºñ±è\n");
				break;
			case 2:
				printf("p2:º¸\n");
				printf("Áü\n");
				break;
			default:
				break;
			}
			break;
		case 2: //º¸
			switch (p2)
			{
			case 0:
				printf("p2:°¡À§\n");
				printf("Áü\n");
				break;
			case 1:
				printf("p2:¹ÙÀ§\n");
				printf("ÀÌ±è\n");
				break;;
			case 2:
				printf("p2:º¸\n");
				printf("ºñ±è\n");
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
		//2-2 if ¹®
		if (p1 == °¡À§)
		{
			printf("°¡À§\n");
			if (p2 == °¡À§)
			{
				printf("p2: °¡À§\n");
				printf("ºñ±è\n");
			}
			else if (p2 == ¹ÙÀ§)
			{
				printf("p2: ¹ÙÀ§\n");
				printf("Áü\n");
			}
			else if (p2 == º¸)
			{
				printf("p2: º¸\n");
				printf("ÀÌ±è\n");
			}
		}
		else if (p1 == ¹ÙÀ§)
		{
			printf("¹ÙÀ§\n");
			if (p2 == °¡À§)
			{
				printf("p2: °¡À§\n");
				printf("ÀÌ±è\n");
			}
			else if (p2 == ¹ÙÀ§)
			{
				printf("p2: ¹ÙÀ§\n");
				printf("ºñ±è\n");
			}
			else if (p2 == º¸)
			{
				printf("p2: º¸\n");
				printf("Áü\n");
			}

		}
		else if (p1 == º¸)
		{
			printf("°¡À§\n");
			if (p2 == °¡À§)
			{
				printf("p2: °¡À§\n");
				printf("Áü\n");
			}
			else if (p2 == ¹ÙÀ§)
			{
				printf("p2: ¹ÙÀ§\n");
				printf("ÀÌ±è\n");
			}
			else if (p2 == º¸)
			{
				printf("p2: º¸\n");
				printf("ºñ±è\n");
			}
		}
	}

	if (0)
	{
	//3-1 switch·Î Ç®±â
	//°æ¿ìÀÇ ¼ö°¡ 12°³

	printf("¸î³â»ý?\n");
	int year;
	scanf_s("%d", &year);
	year = year % 12;

	switch (year)
	{
	case 0:
		printf("¿ø¼þÀÌ\n");
		break;
	case 1:
		printf("´ß\n");
		break;
	case 2:
		printf("°³\n");
		break;
	case 3:
		printf("µÅÁö\n");
		break;
	case 4:
		printf("Áã\n");
		break;
	case 5:
		printf("¼Ò\n");
		break;
	case 6:
		printf("È£¶ûÀÌ\n");
		break;
	case 7:
		printf("Åä³¢\n");
		break;
	case 8:
		printf("¿ë\n");
		break;
	case 9:
		printf("¹ì\n");
		break;
	case 10:
		printf("¸»\n");
		break;
	case 11:
		printf("¾ç\n");
		break;
	default:
		break;
	}

	//3-2 if·Î Ç®±â
	int myThee = year % 12;
	
	enum ½ÊÀÌÁö½Å temp = myThee;
	printf("%d\n", temp);
	if (myThee == ¿ø¼þÀÌ)
		printf("¿ø¼þÀÌ\n");
	else if (myThee == ´ß)
		printf("´ß\n");
	else if (myThee == °³)
		printf("°³\n");
	else if (myThee == µÅÁö)
		printf("µÅÁö\n");
	else if (myThee == Áã)
		printf("Áã\n");
	else if (myThee == ¼Ò)
		printf("¼Ò\n");
	else if (myThee == È£¶ûÀÌ)
		printf("È£¶ûÀÌ\n");
	else if (myThee == Åä³¢)
		printf("Åä³¢\n");
	else if (myThee == ¿ë)
		printf("¿ë\n");
	else if (myThee == ¹ì)
		printf("¹ì\n");
	else if (myThee == ¸»)
		printf("¸»\n");
	else if (myThee == ¾ç)
		printf("¾ç\n");
	}

	//ÀüÃ¼ ¼±ÅÃ ÈÄ ctrl+k + ctrl+f´Â ±ò²ûÇÏ°Ô Á¤·Ä

	return 0;
}