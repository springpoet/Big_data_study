#include<stdio.h>
void season()
{
	int month;
	printf("�� ����? ");
	scanf_s("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		printf("����\n");
	else if (month == 3 || month == 4 || month == 5)
		printf("��\n");
	else if (month == 6 || month == 7 || month == 8)
		printf("���\n");
	else if (month == 9 || month == 10 || month == 11)
		printf("����");
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
		printf("�ܿ������\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�ܰ���\n");
		break;
	}
}

int calcAge()
{
	int year;
	printf("�� ���? ");
	scanf_s("%d", &year);
	return 2022-year+1;
}

int calcAge2(int year)
{
	return 2022 - year + 1;
}
int main()
{
	//1��.
	int month;
	printf("q1 �¾ ���� �Է��ϼ���. ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ������\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�ܰ���\n");
		break;
	}

	//2��.
	season();

	//3.��
	int month3;
	printf("q3 �¾ ���� �Է��ϼ���. ");
	scanf_s("%d", &month3);
	printfseason(month3);

	//4��.
	int age = calcAge();
	printf("%d\n", age);

	//5��.
	int year;
	printf("�� ���? ");
	scanf_s("%d", &year);
	int age2 = calcAge2(year);
	printf("%d\n", age2);
	return 0;
}