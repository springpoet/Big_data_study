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
	printf("�ּڰ� : %d\n", min);
	return max;
}

int main()
{
	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = 300;

	int max = findMinMax(numbers2, 3);//�Լ����� i ���� size�� ����
	//�Լ����� ���ϰ� ������ �� ���� ���� �� ���
	printf("numbers2�� �ִ� : %d\n", max);
	//�Լ��� printf ���� ��
	findMinMax(numbers1, 5);
	return 0;
}