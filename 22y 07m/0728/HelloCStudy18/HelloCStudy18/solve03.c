#include<stdio.h>
int main()
{
	//1��
	int students[3][5];//3��, �� ������ ���ǽ� 5��.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d�� %d�� ���ǽǿ� �л� �� ���ִ�?", i + 1, j + 1);
			scanf_s("%d", &students[i][j]);
		}
	}
	printf("\n");

	//2��.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d�� %d�� ���ǽǿ� �л� %d�� �־�\n", i + 1, j + 1, students[i][j]);
		}
		printf("\n");
	}

	//3��.
	int floor;
	int room;
	int num;
	printf("�� ���� ���ǽ� ���� �Է�");
	scanf_s("%d %d", &floor, &room);
	int stu[100][100];
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < room; j++)
		{
			printf("%d�� %d�� ���ǽ� : ", i + 1, j + 1);
			scanf_s("%d", &num);
			stu[i][j] = num;
		}	
		printf("\n");
	}
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < room; j++)
		{
			printf("%d�� %d�� ���ǽǿ��� %d�� �ִ�.\n", i+1, j+1, stu[i][j]);
		}
		printf("\n");
	}
	return 0;
}