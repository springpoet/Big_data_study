#include<stdio.h>
struct Students
{
	char name[100];
	int number;
}typedef Students;


int main()
{
	Students s1 = { .name = "������",.number = 1 };
	printf("%d�� �л� %s\n", s1.number, s1.name);

	Students students[3];
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		int num;
		printf("�л��� ��ȣ��? ");
		scanf_s("%d", &num);
		int duplicate = 0; // ��ȣ�� �ִ� ��� 1, ���� ��� 0.
		for (int j = 0; j < i; j++)
		{

			if (students[j].number == num)
			{
				i--;
				printf("�ٽ� �Է��ϼ���.\n");
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)
		{
			students[i].number=num;
			printf("�л��� �̸���? ");
			rewind(stdin);
			gets(students[i].name);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d�� �л��� �̸��� %s\n", students[i].number, students[i].name);
	}

	return 0;
}