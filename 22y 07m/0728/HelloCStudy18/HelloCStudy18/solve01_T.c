#include<stdio.h>

//�迭�� �������̱� ������ �Լ��� �Ű������� ���̰� �Ǹ�
//�Լ����� ���� ��ȭ�� ���� �� �迭������ ���� ��ȭ�� �ִ�.
//void increaseNum(int numbers[])
//����� ���� �ѱ���� �ƴϸ� �����Ⱚ�� �� �ִ� ��
//�̿��ؼ� �ϵ���.... �׳� ������ ���� �Ѱ��ָ� ��
void increaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] += n;
}
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
void decreaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] -= n;
	}
}
void q4_decreaseNum(int numbers[], int size, int n)
{
	if (n < 0)
		return;
	for (int i = 0; i < size; i++)
	{
		int num = numbers[i];
		num -= n;
		if (num < 0)
			return;
	}
}
int main()
{
	//�ϳ��� ������ ���ؼ� ���� ���� ���ڸ�
	//������ �� �ִ� �� �迭
	//ó���� �������ڸ��� �� �ֱ�
	int ages[5] = { 23, 25, 30, 29, 50 };
	int ages2[3] = { 10,20,30 };

	//�����ϰ��� �� �ֱ�
	int ages3[3];
	ages3[0] = 20;
	ages3[1] = 30;
	ages3[2] = 40;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ages[i]);
		ages[i] = i * i + ages[i];//�ƹ����̳� �־
	}

	printf("---------1��-----------\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);
	increaseNum(ages2, 3, 100);
	printf("---- ��ȭ ��----\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);
	
	//2��.
	printArr(ages, sizeof(ages) / sizeof(int));

	//3��.


	return 0;

}