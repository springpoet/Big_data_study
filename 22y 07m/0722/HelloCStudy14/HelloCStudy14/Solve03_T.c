#include<stdio.h>
#include<stdlib.h>//���� �Ҵ�


//�Ű����� �ڸ��� int numbers�� �� ���, -89��¼�� �ϴ� ������ ���� ����.
//int numbers[] �Ǵ� int* numbers�� �����.

//�Ϲ� �Լ��� Ǯ��.
int findMinIndex(int numbers[], int size)
{
	int min = numbers[0];
	int min_idx = 0;
	for (int i = 1; i < size; i++)
	{
		if (min > numbers[i])
		{
			min = numbers[i];
			min_idx = i;
		}
	}
	return min_idx;
}

//�����ͷ� Ǯ��.
int findMinIndex2(int* numbers, int size)
{
	int min = *(numbers);
	int min_idx = 0;
	for (int i = 1; i < size; i++)
	{
		if (min > *(numbers + i))
		{
			min = *(numbers + i);
			min_idx = i;
		}
	}
	return min_idx;
}

int main()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &numbers[i]);
	}
	int min_idx = findMinIndex(numbers, 5);
	int min_idx2 = findMinIndex2(numbers, 5);
	printf("���� ���� ���� �ε��� : %d\n", min_idx);
	printf("���� ���� ���� �ε��� : %d\n", min_idx2);

	//�����Ҵ��� ���
	int size;
	printf("�迭 ������? : ");
	scanf_s("%d", &size);
	int* mynumbers = (int*)malloc(size * sizeof(int));

	//������ ���̳ѹ���=(������)����(�迭����ũ��); ����
	//������ ���̳ѹ���=(������)Į��(��������,������ũ��)
	//Į��(5,�����������Ʈ) //��Ʈ 5�� ��ŭ�� ũ��迭�� �Ҵ�
	//����(�����Ҵ�迭��) //�����Ҵ� ����

	for (int i = 0; i < size; i++)
	{
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &mynumbers[i]);
	}
	printf("���� ���� ���� �ε��� : %d\n", findMinIndex(mynumbers, size));
	//�Լ��� �״�� ���

	return 0;
}