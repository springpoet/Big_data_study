#include<stdio.h>
int main()
{
	//1번
	int students[3][5];//3층, 각 층마다 강의실 5개.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d층 %d번 강의실에 학생 몇 명있니?", i + 1, j + 1);
			scanf_s("%d", &students[i][j]);
		}
	}
	printf("\n");

	//2번.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d층 %d번 강의실에 학생 %d명 있어\n", i + 1, j + 1, students[i][j]);
		}
		printf("\n");
	}

	//3번.
	int floor;
	int room;
	int num;
	printf("층 수와 강의실 수를 입력");
	scanf_s("%d %d", &floor, &room);
	int stu[100][100];
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < room; j++)
		{
			printf("%d층 %d번 강의실 : ", i + 1, j + 1);
			scanf_s("%d", &num);
			stu[i][j] = num;
		}	
		printf("\n");
	}
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < room; j++)
		{
			printf("%d층 %d번 강의실에는 %d명 있다.\n", i+1, j+1, stu[i][j]);
		}
		printf("\n");
	}
	return 0;
}