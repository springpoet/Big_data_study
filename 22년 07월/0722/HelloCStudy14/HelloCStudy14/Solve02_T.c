#include<stdio.h>
#define MAX 1024//��ũ�� ���, ���ú��� ���� ó���Ǳ� ������ �迭 ũ�� �Ҵ� ����
int main()
{
	//�迭 �ȿ� ���ڸ� �ְ� ���� ū ��, ū ���� �ε��� ���
	//�ִ�,�ּҰ� ã�� ������ ���� ����.
	
	//�Լ����� �׳� Ǯ��
	int numbers[5];
	int mynum[MAX];
	//int num = 5;
	//int numbers2[num];//������ �迭 ũ�� ���� ���ϱ� ������ malloc, calloc��
	//num�� numbers �� �� ���� ������ �ֱ� ������ �Ҵ� �Ұ���.

	int size = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("%d��° ���� �Է� : ", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int max_index = 0; // ù��° ���ڸ� ���� ũ�ٰ� ����
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; // ����
		}
	}
	printf("�ִ��� [%d]�� �ֽ��ϴ�.\n", max_index);
	
	return 0;
}