#include<stdio.h>

void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}

//2��.
int findMax(int numbers[], int size)
{
	int max = numbers[0];
	int min = numbers[0];
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i])
		{
			max = numbers[i];
		}
	}
	printf("�ּҰ� : %d\n", min);
	return max;
}

//3��.
void reverse_arr(int numbers[], int size)//int number[],int size �� ��� ��
{
	for (int i = 0; i < size ; i++)
		numbers[i] *= -1;
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

	//1��
	//�Լ��� numbers�� ������ �о�� �ϴ� �� �𸣱� ������
	//������(�д� ����)�� ���� �Ѱ���� ��.
	printArr(numbers2, 3);

	//2��
	int max = findMax(numbers2, sizeof(numbers2) / sizeof(int));
	printf("numbers2�� �ִ� : %d\n", max);

	//3��
	printArr(numbers2, 3);
	reverse_arr(numbers2, 3);
	printArr(numbers2, 3);

	return 0;
}