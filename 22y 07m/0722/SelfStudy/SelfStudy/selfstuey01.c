#include<stdio.h>


void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

int findMinMax(int arr[], int size)
{
	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("최솟값 : %d\n", min);
	return max;
}

int main()
{
	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = 300;

	int max = findMinMax(numbers2, 3);//함수에서 i 범위 size로 변경
	//함수에서 리턴값 받을때 새 변수 설정 후 출력
	printf("numbers2의 최댓값 : %d\n", max);
	//함수의 printf 받을 때
	findMinMax(numbers1, 5);
	return 0;
}