#include<stdio.h>
struct Student
{
	int number;
	char name[100];
}typedef Student;



int main()
{
	Student s1 = { .number = 1,.name = "������" };
	printf("%d�� �л� %s \n", s1.number, s1.name);
	rewind(stdin);
	Student students[3];
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		printf("�̸��� ��������. ");
		gets(students[i].name);
		rewind(stdin);
		printf("��ȣ�� �Է��ϼ���. ");
		scanf_s("%d", &students[i].number);
		printf("\n%d�� �л� �̸��� %s\n", students[i].number, students[i].name);

		for (int j = 0; j < i; j++)
		{
			if (students[j].number == students[i].number)
			{
				i--;
				printf("�ٽ� �Է� �ϼ���\n");
			}
		}
	}
	return 0;
}
