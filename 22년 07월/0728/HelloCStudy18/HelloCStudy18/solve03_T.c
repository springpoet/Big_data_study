#include<stdio.h>
int main()
{
	//1��.
	int counts[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���ǽ� �ȿ� �л� �� �Է�");
			scanf_s("%d", &counts[i][j]);
		}
	}
	
	//2��.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", counts[i][j]);
		}
		printf("\n");
	}

	//3��.
	int rooms[3];

	scanf_s("%d %d %d", &rooms[0], &rooms[1], &rooms[2]);
	printf("%d %d %d\n", rooms[0], rooms[1], rooms[2]);


	return 0;
}