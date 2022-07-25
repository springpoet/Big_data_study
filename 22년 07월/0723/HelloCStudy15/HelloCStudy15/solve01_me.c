#include<stdio.h>
struct Student
{
	int number;
	char name[100];
}typedef Student;



int main()
{
	Student s1 = { .number = 1,.name = "도광현" };
	printf("%d번 학생 %s \n", s1.number, s1.name);
	rewind(stdin);
	Student students[3];
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		printf("이름을 적으세요. ");
		gets(students[i].name);
		rewind(stdin);
		printf("번호를 입력하세요. ");
		scanf_s("%d", &students[i].number);
		printf("\n%d번 학생 이름은 %s\n", students[i].number, students[i].name);

		for (int j = 0; j < i; j++)
		{
			if (students[j].number == students[i].number)
			{
				i--;
				printf("다시 입력 하세요\n");
			}
		}
	}
	return 0;
}
