#include<stdio.h>
void season()
{
	int month;
	printf("몇 월생? ");
	scanf_s("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		printf("갸울\n");
	else if (month == 3 || month == 4 || month == 5)
		printf("뽐\n");
	else if (month == 6 || month == 7 || month == 8)
		printf("썸머\n");
	else if (month == 9 || month == 10 || month == 11)
		printf("까을");
	else
		printf("??\n");
}

void printfseason(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨우우우룽루울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄봄봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("열음\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("외계인\n");
		break;
	}
}

int calcAge()
{
	int year;
	printf("몇 년생? ");
	scanf_s("%d", &year);
	return 2022-year+1;
}

int calcAge2(int year)
{
	return 2022 - year + 1;
}
int main()
{
	//1번.
	int month;
	printf("q1 태어난 월을 입력하세요. ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨우우우룽루울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄봄봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("열음\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("외계인\n");
		break;
	}

	//2번.
	season();

	//3.번
	int month3;
	printf("q3 태어난 월을 입력하세요. ");
	scanf_s("%d", &month3);
	printfseason(month3);

	//4번.
	int age = calcAge();
	printf("%d\n", age);

	//5번.
	int year;
	printf("몇 년생? ");
	scanf_s("%d", &year);
	int age2 = calcAge2(year);
	printf("%d\n", age2);
	return 0;
}