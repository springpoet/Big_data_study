#include<stdio.h>

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

int maxmin(int numbers[], int size)
{
	int max = numbers[0];
	int min = numbers[0];
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];

		}
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	printf("최대값=%d\n", max);
	printf("최소값=%d\n", min);
}

int main()
{
	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = 300;
	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	printArr(numbers1, 5);
	printArr(numbers2, 3);

	maxmin(numbers1, 5);
	maxmin(numbers2, 3);

	return 0;
}