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
	printf("����� �Է��ϼ��� ");
	scanf_s("%d", &size);

	int* arr1 = (int*)malloc(size * sizeof(int));
	printf("�����ŭ ���� �Է��ϼ��� ");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("���� ū ���� �ε��� = %d\n", maxNum(arr1, size));
	printf("���� ���� ���� �ε��� = %d\n", minNum(arr1, size));
	//�ε��� ����� �۵��ϰ� ������ �ȵ�, ���� ��� �ȵ�;; 
	return 0;
}