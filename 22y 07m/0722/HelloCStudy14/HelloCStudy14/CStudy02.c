#include<stdio.h>
#include<stdlib.h>//���� �迭�� ���




int main()
{
	//10ĭ¥�� �迭 �ۼ�
	int* dynamic_arr = (int*)malloc(10 * sizeof(int));
	int size;
	printf("�迭 ������ ����");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		dynamic_arr2[i] = i+10;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", dynamic_arr2[i]);
	}
	
	//malloc : �޸� �ʱ�ȭ�� �� ��(ó���� ������ �� �Է� �� ����)
	//calloc : 0���� �ʱ�ȭ ��

	//10ĭ¥�� �迭�� ������µ� ���� ���� 0���� �ʱ�ȭ �� ����
	int* mynumbers = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%d\n", mynumbers[i]);

	//���� �޸𸮴� ���α׷��Ӱ� �������� �Ҵ��� ���̱� ������
	//�� ���� free�� ������� ��.
	//�޸� ����(memory leak) �߻�.
	//���α׷��� �̴�� �����ٸ� ���� �Ƚᵵ ������ 
	//���ӵ� ��� free�� �ؾ��Ѵ�.
	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);


	return 0;
}