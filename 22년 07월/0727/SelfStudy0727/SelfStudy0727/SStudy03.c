#include<stdio.h>

void q11_season()
{
	int month;
	printf("Q11 : �� ��? ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
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
		printf("���� �߸���\n");
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
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
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
		printf("���� �߸���\n");
		break;
	}
}
int q13_age()
{
	int year;
	int age;
	printf("Q13 : �� ���? ");
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
	//10��.
	int month;
	printf("Q10 : �� ��? ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
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
		printf("���� �߸���\n");
		break;
	}
	//11��.
	q11_season();

	//12��.
	int month12;
	printf("Q12: �� ����? ");
	scanf_s("%d", &month12);
	q12_season(month12);

	//13��.
	printf("%d\n", q13_age());

	//14��.
	int age14;
	printf("Q14 : �� ���? ");
	scanf_s("%d", &age14);
	printf("%d\n", q14_age(age14));
	return 0;
}
switch (year % 12)
{
case 0:
	printf("������ ��\n");
	break;
case 1:
	printf("�� ��\n");
	break;
case 2:
	printf("�� ��\n");
	break;
case 3:
	printf("���� ��\n");
	break;
case 4:
	printf("�� ��\n");
	break;
case 5:
	printf("�� ��\n");
	break;
case 6:
	printf("ȣ���� ��\n");
	break;
case 7:
	printf("�䳢 ��\n");
	break;
case 8:
	printf("�� ��\n");
	break;
case 9:
	printf("�� ��\n");
	break;
case 10:
	printf("�� ��\n");
	break;
case 11:
	printf("�� ��\n");
	break;
default:
	printf("�ʴ� ����?\n");
	break;
}