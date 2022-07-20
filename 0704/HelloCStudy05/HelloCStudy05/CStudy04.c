#include<stdio.h>
int main()
{
	if (0)
	{
		int a, b, c;
		printf("세 변수를 입력하세요");
		scanf_s("%d,%d,%d", &a, &b, &c);
		int sum = 0;
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
				continue;
			else
				sum += i;
		}
		printf("%d부터 %d까지의 합이면서 %d의 배수는 빼기=%d", a, b, c, sum);
	}
	//2.
	//3의 배수, 5의배수?
	//5kg 주머니로 나눠지는지 체크, 나누지면 끝.
	//안되면 3kg 주머니에 담는다.
	int sugar;
	printf("설탕 몇 kg?");
	scanf_s("%d", &sugar);
	int pocket = 0;//주머니수
	while (1)
	{
		if (sugar % 5 == 0)
		{
			pocket += sugar / 5;
			printf("%d묶음\n", pocket);
			break;
		}
		sugar -= 3;
		pocket++;//3kg주머니 하나 증가
		if (sugar < 0)
		{
			printf("-1\n");
			break;
		}

	}


	return 0;
}