#include<stdio.h>
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
double average(int ages[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ages[i];
	}
	return sum / (double)size; //double�� �Է��ؼ� ���� ��ȯ �ؾ� ��.
}
int* myages()
{
	static int ages[3];//static�� ���� ������ �Է��� ���� �Լ��ȿ����� �����ϱ� ������
		//���� �ؾ� ��.
	//�Լ��� ���� �� ������� �ʾƾ� ȣ�� ����. ���α׷��� ���� �� �����.
	for (int i = 0; i < 3; i++)
	{
		printf("�л��� ���� �Է�");
		scanf_s("%d", &ages[i]);
	}
	return ages;
}
	int main()
	{
		int ages[3];
		for (int i = 0; i < 3; i++)
		{
			printf("�л��� ���� �Է� ");
			scanf_s("%d", &ages[i]);
		}
		//3��.
		printf("��ճ��� : %.2f\n", average(ages, 3));

		//4��.
		int* values = myages();
		for (int i = 0; i < 3; i++)
		{
			printf("%d\n", values[i]);
		}

		printArr(values, 3);

		return 0;
	}