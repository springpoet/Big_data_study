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
	//�׳� Ǯ��
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� �Է�", i);
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
	printf("�ִ��� %d �ڸ��� �ֽ��ϴ�.\n", max_idx);

	//�Լ��� Ǯ��
	int min_idx = findMin(numbers, 5);
	printf("���� ���� ���� �ε��� : %d\n", min_idx);


	//�����ͷ� Ǯ��
	int min_idx2 = findMin(numbers, 5);
	printf("���� ���� ���� �ε��� : %d\n", min_idx2);


	//�����Ҵ����� Ǯ��(���� �Լ� ���)
	int size;
	printf("�迭�� ũ��? ");
	scanf_s("%d", &size);
	int* numbers3 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		printf("���ڸ� �Է� ");
		scanf_s("%d", &numbers3[i]);
	}
	printf("���� ���� ���� ��ġ : %d\n", findMin(numbers3, size));
	return 0;
}