#include<stdio.h>
//다차원 배열
int main()
{
	//미리 입력하는 방법
	int ages[3][5] = { { 20,25,32,33,31 },{21,52,23,30,35 },{27,24,22,232,5}};
	//직접 입력하는 방법
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ages[i][j];
			printf("나이 입력 ");
			scanf_s("%d", &ages[i][j]);
		printf("%d ", ages[i][j]);
		}
		printf("\n");
		
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", ages[i][j]);
		}
		printf("\n");
	}

	return 0;
}