//1. ���� �¾ ������ �Ű������� �ް� ����������
//���ڿ��� �����ϼ���.
#include<stdio.h>
char* outputThee(int year)
{
	switch (year % 12)
	{
	case 0:
		return "������";
	case 1:
		return "��";
	case 2:
		return "��";
	case 3:
		return "����";
	case 4:
		return "��";
	case 5:
		return "��";
	case 6:
		return "ȣ����";
	case 7:
		return "�䳢";
	case 8:
		return "��";
	case 9:
		return "��";
	case 10:
		return "��";
	case 11:
		return "��";
	default:
		return "����";
	}
}
char* moreEasyThee(int year)
{
	year %= 12;
	//2�����迭����.
	static char thees[12][10]
		= { "������","��","��","����",
	"��","��","ȣ����","�䳢",
	"��","��","��","��" };
	return thees[year];
}
int main()
{
	char thee[10];// = "monkey";
	int year;
	printf("�����ΰ���");
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		//thee = "������";
		strcpy(thee, "������");//thee�� �����̶��
		break;                 //���ڿ��� �������
	case 1:
		strcpy(thee, "��");
		break;
	case 2:
		strcpy(thee, "��");
		break;
	case 3:
		strcpy(thee, "����");
		break;
	case 4:
		strcpy(thee, "��");
		break;
	case 5:
		strcpy(thee, "��");
		break;
	case 6:
		strcpy(thee, "ȣ����");
		break;
	case 7:
		strcpy(thee, "�䳢");
		break;
	case 8:
		strcpy(thee, "��");
		break;
	case 9:
		strcpy(thee, "��");
		break;
	case 10:
		strcpy(thee, "��");
		break;
	case 11:
		strcpy(thee, "��");
		break;
	default:
		printf("fault");
		return -1; //�ڵ带 ������ѹ���
	}
	printf("%s", thee);

	int year2;
	printf("�����ΰ���");
	scanf_s("%d", &year2);
	printf("%s\n", outputThee(year2));
	printf("%s\n", moreEasyThee(year2));
	return 0;
}