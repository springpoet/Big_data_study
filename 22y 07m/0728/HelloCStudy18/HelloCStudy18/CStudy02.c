#include<stdio.h>
//������ �迭
int main()
{
	//�̸� �Է��ϴ� ���
	int ages[3][5] = { { 20,25,32,33,31 },{21,52,23,30,35 },{27,24,22,232,5}};
	//���� �Է��ϴ� ���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ages[i][j];
			printf("���� �Է� ");
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