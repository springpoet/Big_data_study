#include<stdio.h>
#include<stdlib.h>

int maxNum(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			arr[i] = max;
		}
	}
	return max;
}

int minNum(int* arr, int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			arr[i] = min;
		}
	}
	return min;
}
int main()
{
	int size;
	printf("사이즈를 입력하세요 ");
	scanf_s("%d", &size);

	int* arr1 = (int*)malloc(size * sizeof(int));
	printf("사이즈만큼 수를 입력하세요 ");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("가장 큰 수의 인덱스 = %d\n", maxNum(arr1, size));
	printf("가장 작은 수의 인덱스 = %d\n", minNum(arr1, size));
	//인덱스 양수만 작동하고 음수는 안됨, 값도 출력 안됨;; 
	return 0;
}