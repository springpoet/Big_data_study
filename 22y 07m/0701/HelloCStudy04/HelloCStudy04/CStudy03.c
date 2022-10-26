#include<stdio.h>
int main()
{
	//반복문

	//3가지 
	//물론 goto문을 이용할 수도 있으나 하지말기
	//똑같은 문장을 10번 출력하거나 1부터 10까지의 합을 구해야 할 경우

	if (0)
	{

		//1.for문
		for (int i = 0; i < 10; i++)
			printf("이동준 선생님 안녕하세요.\n");
		int sum =0;
		for (int i = 1; i < 10; i++)
			sum += i;
		printf("1부터 10까지의 합 : %d\n", sum);

		//for 문도 중괄호로 묶을 수 있다.
		for (int i = 0; i < 5; i++)
		{
			if (i % 2 == 0)
				printf("*");
			else
				printf("1");
		}

	}
	//1.
	if (0)
	{

	int sum = 0;
	for (int i = 1; i < 101; i++)
		sum += i;
	printf("1부터 100까지의 합 : %d\n", sum);

	}
	//2.
	int sum1 = 0;
	int i;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			sum1 += i;
	}
	printf("%d\n",sum1);
	
	//3.1부터 n까지의 곱
	int sum2 = 0;
	printf("1부터 n까지의 곱을 출력합니다.\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++)
	{
		sum2 *= i;
	}

	printf("%d", sum2);






	//2.while문
	// 
	//3.do while문


	return 0;
}