#include<stdio.h>
int main()
{
	int age;
	scanf_s("%d", &age);
	printf("����̴�?");
	if (age < 0)
	{
		printf("����\n");
	}
	else
	{
		age /= 10;
		switch (age)
		{
		case 0:
			printf("��������\n");
			break;
		case 1:
			printf("û��\n");
			break;
		case 2:
			printf("���߷�\n");
			break;
		case 3:
			printf("������\n");
			break;
		default:
			printf("������");
			break;
		}

	}
	//2.
	printf("���� �Է�");
	int score;
	double score;
	scanf_s("%lf", &score);
	if (score < 0)
		printf("����");
	else if (score < 1.0)
		printf("F");
	else if (score < 2.0)
		printf("D");
	else if (score < 3.0)
		printf("C");
	else if (score < 4.0)
		printf("B");
	else if (score < 4.5)
		printf("A");
	else if (score == 4.5)
		printf("A+");
	else
		printf("����");








	return 0;
}