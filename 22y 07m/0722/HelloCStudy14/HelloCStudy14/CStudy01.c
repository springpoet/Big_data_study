#include<stdio.h>

//�迭�� �Լ��� �Ű������� �ѱ� ���� 
//�迭�� ũ�⵵ ���� �Ѱ���� ��.
//�׸��� �Ű������� int numbers[]��� �ص� �ǰ�
//int* numbers ��� �ص� ��.
//�迭�� �������̱� ����.
void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}


int main()
{
	//�迭
	//1���� ������ ���� ���� ���� ������.

	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = 300;
							//(20)				(4)
	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	printArr(numbers2, 3);

	return 0;
}