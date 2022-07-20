#include<stdio.h>
int main()
{
	//1. 1부터 100까지 합
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("1부터 100까지의 합은 %d입니다.\n", sum);
	//2. 1부터 100까지 합, 3의 배수
	sum = 0;//sum을 초기화 해준다.
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("합은?:%d\n", sum);

	//3.
	printf("몇까지곱할까요?\n");
	int n;
	scanf_s("%d", &n);
	sum = 1;//0으로 초기화 하면 안된다.
	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("1부터 %d까지의 곱:%d\n", n, sum);

	//4.삼각형 출력 입력 : 3
	int floor; //4-7이 변수 쓸거임
	printf("몇 층?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");

	}
	//띄어쓰기랑 별 둘 다 반복분으로 한다.
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf("-");//띄어쓰기 문
		for (int j = 0; j < i + 1; j++)
			printf("*");//별 문
		printf("\n");
	}

	//6.2n+1법칙+1,3,5,7,9 수열 따름, 띄어쓰기 갈수록 줄어듬
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf("-");//띄어쓰기 문
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");//별 문
		printf("\n");
	}
	//7.
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf("-");//띄어쓰기 문
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");//별 문
		printf("\n");
	}

	//띄어쓰기가 점점 증가
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("-");//띄어쓰기 문
		for (int j = 0; j < (2 * (floor - i - 1)) - 1; j++)
			printf("*");//별 문
		printf("\n");
	}
	return 0;

}
