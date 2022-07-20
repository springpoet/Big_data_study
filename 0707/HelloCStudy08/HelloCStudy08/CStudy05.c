#include<stdio.h>
int main()
{
	//1. 구구단 2단부터 9단의 값을 2차원 배열에 저장
 //2-9->8행
	//1-9->9열
	int gugu1[8][9];
	int row = sizeof(gugu1) / sizeof(gugu1[0]);
	int col = sizeof(gugu1[0]) / sizeof(gugu1[0][0]);//sizeof(int)
	printf("%d행 %d열\n", row, col);//8행 9열

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			gugu1[i][j] = (i + 2) * (j + 1);
		}
	}
	int gugu2[10][9];
	//10~19단이라 10개
	//col값 똑같아서 그대로 씀
	//row는 행 col은 열
	int gugu2_row = sizeof(gugu2) / sizeof(gugu2[0]);
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			gugu2[i][j] = (i + 10) * (j + 1);
	}
	//3.sum 변수를 1,2번에 집어넣고 누적시켜도됨
	int sum1 = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			sum1 += gugu1[i][j];
	}

	//4.
	int sum2 = 0;
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			sum2 += gugu2[i][j];
	}
	//5.
	int sum3 = sum1 + sum2;
	printf("2~9 합 : %d\n", sum1);
	printf("10-19합 : %d\n", sum2);
	printf("총합 : %d\n", sum3);

	//6.
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%03d ", gugu1[i][j]); 
		printf("\n");
	}
	//7.
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%03d ", gugu2[i][j]);
		printf("\n");
	}
	//선생님 방식.
	//if  10미만은 2번 띄고 100미만은 1번 띄어쓰기
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (gugu1[i][j] < 10)
				printf("  ");
			else if (gugu1[i][j]<100)
				printf(" ");
			printf("%d ", gugu1[i][j]);
		}
			printf("\n");
	}
	//7.
	for (int i = 0; i < gugu2_row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (gugu1[i][j] < 10)
				printf("  ");
			else if (gugu1[i][j]<100)
				printf(" ");
			printf("%d ", gugu2[i][j]);
		}
		printf("\n");
	}
	



	return 0;
}