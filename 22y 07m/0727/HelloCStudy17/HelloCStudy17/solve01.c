#include<stdio.h>
char Thee(int year)
{
	int Thee = year % 12;
	switch (Thee)
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
		break;
	}
}
char ganzi(int year)
{
	char a[12][2048] = { "��","��","��","��","��","��","��","��","��","��","��","��" };
	char b[10][2048] = { "��","��","��","��","��","��","��","��","��","��" };
	int x = year % 12;
	int y = year % 10;
	printf("�¾ �⵵�� ���ڴ� %s%s���̴�.\n", b[y], a[x]);
}

char* season(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "�ܿ�\n";
	case 3:
	case 4:
	case 5:
		return "��\n";
	case 6:
	case 7:
	case 8:
		return "����\n";
	case 9:
	case 10:
	case 11:
		return "����\n";
	default:
		return "�̻��� ���\n";
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
	//1��.
	int myYear;
	printf("�¾ �⵵? ");
	scanf_s("%d", &myYear);
	Thee(myYear);

	//2��.
	ganzi(myYear);

	//3��.
	int month;
	printf("�¾ ����? ");
	scanf_s("%d", &month);
	printf("%s", season(month));

	//4��.
	char length[1024];
	rewind(stdin);
	printf("���ڿ��� �Է��ϼ��� ");
	gets(length);
	int result = char_length(length);
	printf("%d\n", result);

	return 0;
}