#include<stdio.h>
int main()
{
	int age;
	printf("���̸� �Է��ϼ���. ");
	scanf_s("%d", &age);
	if (age < 0)
		printf("���̰� �����Դϴ�.");
	//else if (age < 10)   if, else ����Ҷ��� �� age/=10; ���ʿ����
	//	printf("��������\n");
	//else if (age < 20)
	//	printf("�޽ĸԴ� ģ����\n");
	//else if (age < 30)
	//	printf("û��\n");
	//else if (age < 40)
	//	printf("���߷�\n");
	//else if (age < 50)
	//	printf("������\n");
	//else
	//	printf("������\n");
	else
		age /= 10;
	switch (age)
	{
	case 0:
		printf("��������\n");
		break;
	case 1:
		printf("�޽ĸԴ� ģ����\n");
		break;
	case 2:
		printf("û��\n");
		break;
	case 3:
		printf("���߷�\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	default:
		break;
	}
	//2.
	int score;
	printf("���� ���̴�?");
	scanf_s("%d", &score);
	if (score < 0)
		printf("����\n");
	else
		score = (score * 10) / 5;
	switch (score)
	{
	case 0:
	case 1:
		printf("F\n");
		break;
	case 2:
	case 3:
		printf("D\n");
		break;
	case 4:
	case 5:
		printf("C\n");
		break;
	case 6:
	case 7:
		printf("B\n");
		break;
	case 8:
	case 9:
		printf("A\n");
		break;
	case 10:
		printf("A+\n");
		break;

	default:
		printf("����\n");
		break;
	}

	return 0;
}