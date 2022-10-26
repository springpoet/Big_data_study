#include<stdio.h>
int main()
{
	if (0)
	{

	//6.
	int num;
	printf("숫자를 입력하세요. ");
	scanf_s("%d", &num);
	if (num < 0)
		printf("음수!\n");
	else if (num == 0)
		printf("num은 0!");
	else
	{
		if (num % 2 == 0)
			printf("짝!\n");
		else
			printf("홀!\n");
	}
	//7.구구단 5단
	for (int i = 1; i <= 10; i++)
		printf("5x%d=%d\n", i, 5 * i);

	//8.구구단 n단
	int n;
	printf("구구단 몇 단? ");
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++)
		printf("%d*%d=%d\n", n, i, n * i);

	//9. 2단부터 9단 출력
	for (int n = 2; n < 10; n++)
	{
		for (int i = 1; i < 10; i++)
			printf("%d * %d= %d\n", n, i, n * i);
	}

	//10. 1부터 n까지의 합, 0이하 잘못된 입력이라 출력
	int sum = 0;
	printf("몇까지 더 할까요? ");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum += i; //값 누적
		printf("+%d", i);//메세지 출력


	}
	printf("=%d\n", sum);

	}
	//10. 1부터 n까지의 합을 구하되 아래와 같은 출력 양식
//  단 0 이하의 숫자일 경우 잘못된 입력이라 출력하세요
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		if (n > 0)
			printf("%d 까지의 합:%d", n, sum);
		else if (n <= 0)
			printf("잘못된 입력\n");
	}

	return 0;
}