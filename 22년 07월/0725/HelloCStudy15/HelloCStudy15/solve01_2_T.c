#include<stdio.h>
struct Student
{
	int num;
	char name[100];
}typedef Student;//

void printStudent(Student s)//�ش� ����ü�� �ҷ�����
{
	printf("%d�� �л� %s\n", s.num, s.name);
}

int main()
{
	Student s = { .name = "������",.num = 1 };
	printStudent(s);

	Student students[3];
	for (int i = 0; i < 3; i++)//�л��� ������ �Է� �޴� �ݺ���
	{
		int num;
		printf("�л��� ��ȣ?\n");
		scanf_s("%d", &num);
		int duplicate = 0;
		for (int j = 0; j < i; j++) //�ߺ����� üũ�ϴ� �ݺ���
									//�ڸ��� ���ϴ� �ݺ���
		{
			//1.ù �л��� ��ȣ�� 10�̴�.
			//2.duplicate�� 0�̹Ƿ� ���� if �� �ٷ� ��
			//3.
			if (students[j].num == num)
			{
				printf("�Է��� �����Դϴ�.\n");
				i--;
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)
		{
			students[i].num = num;
			printf("�̸���?\n");
			rewind(stdin);
			gets(students[i].name);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printStudent(students[i]);
	}


	return 0;
}