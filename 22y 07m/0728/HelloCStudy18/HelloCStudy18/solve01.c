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
				printf("\n%d��° ���� �����Դϴ�.\n",i);
				return;
		}
	}
}

int main()
{
	//�������ڸ��� �Է�
	int ages[5] = { 23,25,30,29,50 };
	int ages2[3] = { 30,20,10 };

	//�����ϰ��� �� �ֱ�
	int ages3[3];
	ages3[0] = 10;
	ages3[1] = 20;
	ages[2] = 30;


	printf("\n\n");
	//1��.
	increaseNum(ages, sizeof(ages) / sizeof(int), 100);

	//2��.
	q2_increaseNum(ages, sizeof(ages) / sizeof(int));

	//3��.
	q3_decreaseNum(ages, sizeof(ages) / sizeof(int), 20);
	q2_increaseNum(ages, sizeof(ages) / sizeof(int));

	//4��.
	q4_decreaseNum(ages2, sizeof(ages2) / sizeof(int), 25);
	q2_increaseNum(ages2, sizeof(ages2) / sizeof(int));


	return 0;
}