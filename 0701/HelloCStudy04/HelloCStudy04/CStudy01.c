#include<stdio.h>
#define ���� 0 //��ũ�� ���
#define ���� 1 

//������
//�����򰡿� ���� ����

enum ��������
{
	������, ��, ��, ����, ��, �� , ȣ����, �䳢, ��, ��, ��, ��//�����̿� 0�ο� �� �� ++��
};//or ��=4,��,ȣ����,�䳢,��,��,��,��,������=0,��,��,����(�㿡 4 �ο� �� �� ++�Ǵٰ� �����̿� 0 �ο� �� ++)
int main()
{
	const int �� = 2; //���=������ �ʴ� �� ����� ���� �빮�ڷ� ���°� ����
	if (0)
	{

		//1.
		int month;
		printf("�� ��?\n");
		scanf_s("%d", &month);

		//1-1.if��
		if (month == 1 || month == 2 || month == 12)
			printf("�ܿ�\n");
		else if (month >= 3 && month <= 5)
			printf("��\n");
		else if (month >= 6 && month <= 8)
			printf("����\n");
		else if (month >= 9 && month <= 11)
			printf("����\n");
		else
			printf("���� �޼���\n");
		//1-2. switch��
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
			printf("���� �޼���\n");
			break;
		}
	}

	if (0)
	{


		//2-1. ���� ����������
		printf("���� ���� ��? (player1)");
		int p1, p2;
		scanf_s("%d", &p1);
		printf("���� ���� ��? (player2)");
		scanf_s("%d", &p2);
		p1 %= 3; //3���� ���� ������ ��
		p2 %= 3;

		switch (p1)
		{
		case 0://����
			switch (p2)
			{
			case 0:
				printf("p2:����\n");
				printf("���\n");
				break;
			case 1:
				printf("p2:����\n");
				printf("��\n");
				break;
			case 2:
				printf("p2:��\n");
				printf("�̱�\n");
				break;
			default:
				break;
			}
			break;
		case 1: //����
			switch (p2)
			{
			case 0:
				printf("p2:����\n");
				printf("�̱�\n");
				break;
			case 1:
				printf("p2:����\n");
				printf("���\n");
				break;
			case 2:
				printf("p2:��\n");
				printf("��\n");
				break;
			default:
				break;
			}
			break;
		case 2: //��
			switch (p2)
			{
			case 0:
				printf("p2:����\n");
				printf("��\n");
				break;
			case 1:
				printf("p2:����\n");
				printf("�̱�\n");
				break;;
			case 2:
				printf("p2:��\n");
				printf("���\n");
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
		//2-2 if ��
		if (p1 == ����)
		{
			printf("����\n");
			if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("���\n");
			}
			else if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("��\n");
			}
			else if (p2 == ��)
			{
				printf("p2: ��\n");
				printf("�̱�\n");
			}
		}
		else if (p1 == ����)
		{
			printf("����\n");
			if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("�̱�\n");
			}
			else if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("���\n");
			}
			else if (p2 == ��)
			{
				printf("p2: ��\n");
				printf("��\n");
			}

		}
		else if (p1 == ��)
		{
			printf("����\n");
			if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("��\n");
			}
			else if (p2 == ����)
			{
				printf("p2: ����\n");
				printf("�̱�\n");
			}
			else if (p2 == ��)
			{
				printf("p2: ��\n");
				printf("���\n");
			}
		}
	}

	if (0)
	{
	//3-1 switch�� Ǯ��
	//����� ���� 12��

	printf("����?\n");
	int year;
	scanf_s("%d", &year);
	year = year % 12;

	switch (year)
	{
	case 0:
		printf("������\n");
		break;
	case 1:
		printf("��\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("��\n");
		break;
	case 5:
		printf("��\n");
		break;
	case 6:
		printf("ȣ����\n");
		break;
	case 7:
		printf("�䳢\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 9:
		printf("��\n");
		break;
	case 10:
		printf("��\n");
		break;
	case 11:
		printf("��\n");
		break;
	default:
		break;
	}

	//3-2 if�� Ǯ��
	int myThee = year % 12;
	
	enum �������� temp = myThee;
	printf("%d\n", temp);
	if (myThee == ������)
		printf("������\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ����)
		printf("����\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ȣ����)
		printf("ȣ����\n");
	else if (myThee == �䳢)
		printf("�䳢\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	else if (myThee == ��)
		printf("��\n");
	}

	//��ü ���� �� ctrl+k + ctrl+f�� ����ϰ� ����

	return 0;
}