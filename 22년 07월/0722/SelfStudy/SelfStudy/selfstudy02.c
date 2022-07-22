#include<stdio.h>
#include<stdlib.h>

int findMin(int* arr, int size)
{
	int min = arr[0];
	int min_idx = 0;
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			min_idx = i;
		}
	}
	return min_idx;
}
int findMin2(int* arr, int size)
{
	int min = *(arr);
	int min_idx = 0;
	for (int i = 1; i < size; i++)
	{
		if (min > *(arr+i))
		{
			min = *(arr+i);
			min_idx = i;
		}
	}
	return min_idx;
}




int main()
{
	//그냥 풀기
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 숫자 입력", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int max_idx = 0;
	for (int i = 1; i < 5; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_idx = i;
		}
	}
	printf("최댓값은 %d 자리에 있습니다.\n", max_idx);

	//함수로 풀기
	int min_idx = findMin(numbers, 5);
	printf("가장 작은 값의 인덱스 : %d\n", min_idx);


	//포인터로 풀기
	int min_idx2 = findMin(numbers, 5);
	printf("가장 작은 값의 인덱스 : %d\n", min_idx2);


	//동적할당으로 풀기(위의 함수 사용)
	int size;
	printf("배열의 크기? ");
	scanf_s("%d", &size);
	int* numbers3 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		printf("숫자를 입력 ");
		scanf_s("%d", &numbers3[i]);
	}
	printf("가장 작은 수의 위치 : %d\n", findMin(numbers3, size));
	return 0;
}