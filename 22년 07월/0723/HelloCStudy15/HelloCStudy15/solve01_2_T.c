#include<stdio.h>
struct Student
{
	int num;
	char name[100];
}typedef Student;//

void printStudent(Student s)//해당 구조체에 불러오기
{
	printf("%d번 학생 %s\n", s.num, s.name);
}

int main()
{
	Student s = { .name = "도광현",.num = 1 };
	printStudent(s);

	Student students[3];
	for (int i = 0; i < 3; i++)//학생의 정보들 입력 받는 반복문
	{
		int num;
		printf("학생의 번호?\n");
		scanf_s("%d", &num);
		int duplicate = 0;
		for (int j = 0; j < i; j++) //중복인지 체크하는 반복문
									//자릿수 비교하는 반복문
		{
			//1.첫 학생의 번호가 10이다.
			//2.duplicate가 0이므로 밑의 if 로 바로 감
			//3.
			if (students[j].num == num)
			{
				printf("입력한 숫자입니다.\n");
				i--;
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0)
		{
			students[i].num = num;
			printf("이름은?\n");
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