#include<stdio.h>
struct Students
{
	char name[100];
	int number;
}typedef Students;


int main()
{
	Students s1 = { .name = "도광현",.number = 1 };
	printf("%d번 학생 %s\n", s1.number, s1.name);

	Students students[3];
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		int num;
		printf("학생의 번호는? ");
		scanf_s("%d", &num);
		int duplicate = 0; // 번호가 있는 경우 1, 없는 경우 0.
		for (int j = 0; j < i; j++)
		{

			if (students[j].number == num)
			{
				i--;
				printf("다시 입력하세요.\n");
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)
		{
			students[i].number=num;
			printf("학생의 이름은? ");
			rewind(stdin);
			gets(students[i].name);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d번 학생의 이름은 %s\n", students[i].number, students[i].name);
	}

	return 0;
}