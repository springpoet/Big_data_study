#include<stdio.h>
int main()
{
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