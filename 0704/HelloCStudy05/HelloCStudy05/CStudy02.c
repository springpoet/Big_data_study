#include<stdio.h>
int main()
{
	if (0)
	{

		//1. 팩토리얼 출력
		printf("몇 팩토리얼?");
		int fact;
		scanf_s("%d", &fact);
		printf("%d!=%d", fact, fact);
		for (int i = fact - 1; i > 0; i--)
		{
			printf("x%d\n", i);
		}




		//2. n 부터 m 까지의 합(if문 : m이 작으면 에러메세지 추력 가능, 변수 값 바꾸기 가능

		int n, m;
		printf("n,m 입력하세요.");
		scanf_s("%d,%d", &n, &m);
		if (n > m)//n이 더 클 경우 둘의 값을 서로 바꾸는 방법
		{
			int temp = m;
			m = n;
			n = temp;
		}
		int sum = 0;
		for (int i = n; i <= m; i++)
			sum += i;
		printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
		//3. n 부터 m 까지의 합, 짝수만.
		n, m;
		sum;
		printf("n,m 입력");
		scanf_s("%d,%d", &n, &m);
		if (n > m)
		{
			printf("첫번째가 두번째보다 커서 합 못구함\n");

		}
		else
		{
			sum = 0;
			for (int i = n; i <= m; i++)
			{
				if (i % 2 != 0)
					continue;//.짝수인 경우에만 sum값에 누적
				sum += i;
			}
			printf("%d에서 %d까지의 합:%d", n, m, sum);
		}
		//4. 제곱을 출력하는 코드를 짜되 무한 반복, 0이하 숫자 입력 시 코드 종료
		while (1)
		{
			int input;
			printf("입력");
			scanf_s("%d", &input);
			if (input <= 0)
				break;
			printf("제곱값:%d\n", input * input);
		}
		printf("4번 종료됨\n");
		int input; //. 한번은 무조건 실행한다.
		do
		{
			printf("숫자 입력");
			scanf_s("%d", &input);
			printf("%d", input * input);

		} while (input > 0);
	}

	//5.
	int N;
	printf("입력");
	scanf_s("%d", &N);
	for (int i = 0; i < 2 * N; i++) //행
	{
		int onOffSwitch = i;//
		for (int j = 0; j < N; j++) //N값에 따라 반복
		{
			if (onOffSwitch % 2 == 0)
				printf("*");
			else
				printf("-");
			onOffSwitch++;
		}
		printf("\n");
	}



	return 0;
}