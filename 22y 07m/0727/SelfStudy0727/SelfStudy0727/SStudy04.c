#include<stdio.h>

char* q1_thee(int year)
{
	char thee[12];
	switch (year % 12)
	{
	case 0:
		return "������ ��\n";
	case 1:
		return "�� ��\n";
	case 2:
		return "�� ��\n";
	case 3:
		return "���� ��\n";
	case 4:
		return "�� ��\n";
	case 5:
		return "�� ��\n";
	case 6:
		return "ȣ���� ��\n";
	case 7:
		return "�䳢 ��\n";
	case 8:
		return "�� ��\n";
	case 9:
		return "�� ��\n";
	case 10:
		return "�� ��\n";
	case 11:
		return "�� ��\n";
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
		return "������ ��\n";
	case 1:
		return "�� ��\n";
	case 2:
		return "�� ��\n";
	case 3:
		return "���� ��\n";
	case 4:
		return "�� ��\n";
	case 5:
		return "�� ��\n";
	case 6:
		return "ȣ���� ��\n";
	case 7:
		return "�䳢 ��\n";
	case 8:
		return "�� ��\n";
	case 9:
		return "�� ��\n";
	case 10:
		return "�� ��\n";
	case 11:
		return "�� ��\n";
	default:
		return -1;
	}
}
int main()
{
	//1��.
	int year1;
	printf("Q1 : �� �� ��? ");
	scanf_s("%d", &year1);
	printf("%s", q1_thee(year1));
	
	//2��.
	int year2;
	printf("Q2 : �� �� ��? ");
	scanf_s("%d", &year2);
	printf("%s", q2_thee(year2));



	return 0;
}