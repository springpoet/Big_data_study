#include<stdio.h>

void q2_season()
{
	int month;
	printf("\nq2 �� ��??\n");
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
	default:
		printf("�߸���\n");
		break;
	}
}
void q3_season(int month)
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
	default:
		printf("�߸���\n");
		break;
	}
}

int q4_year()
{
	int myYear;
	printf("�¾ ������?\n");
	scanf_s("%d", &myYear);
	int age;
	age = 2022 - myYear + 1;
	return age;
}
int q5_year(int myYear)
{
	return 2022 - myYear + 1;
}

int main()
{
	int month;
	printf("q1 �� ��?\n");
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
	default:
		printf("�߸���\n");
		break;
	}

	q2_season();

	int q3;
	printf("\nq3 �� ��? \n");
	scanf_s("%d", &q3);
	q3_season(q3);
	
	printf("����� %d���Դϴ�.\n", q4_year());


	int myYear;
	printf("�¾ ������?\n");
	scanf_s("%d", &myYear);
	printf("����� %d�� �Դϴ�.\n", q5_year(myYear));

	return 0;
}