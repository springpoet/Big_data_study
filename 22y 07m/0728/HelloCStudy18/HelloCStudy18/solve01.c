#include<stdio.h>
void increaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] += n;

}

void q2_increaseNum(int* numbers, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}
void q3_decreaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] -= n;
}
void q4_decreaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] -= n;
		{
			if (numbers[i] < 0)
				printf("\n%d번째 값이 음수입니다.\n",i);
				return;
		}
	}
}

int main()
{
	//선언하자마자 입력
	int ages[5] = { 23,25,30,29,50 };
	int ages2[3] = { 30,20,10 };

	//선언하고나서 값 넣기
	int ages3[3];
	ages3[0] = 10;
	ages3[1] = 20;
	ages[2] = 30;


	printf("\n\n");
	//1번.
	increaseNum(ages, sizeof(ages) / sizeof(int), 100);

	//2번.
	q2_increaseNum(ages, sizeof(ages) / sizeof(int));

	//3번.
	q3_decreaseNum(ages, sizeof(ages) / sizeof(int), 20);
	q2_increaseNum(ages, sizeof(ages) / sizeof(int));

	//4번.
	q4_decreaseNum(ages2, sizeof(ages2) / sizeof(int), 25);
	q2_increaseNum(ages2, sizeof(ages2) / sizeof(int));


	return 0;
}