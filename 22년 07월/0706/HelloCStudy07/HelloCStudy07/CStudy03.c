#include<stdio.h>
int main()
{
	//1.
	int numbers[5];
	int size = sizeof(numbers) / sizeof(int);//= number[5]; 
	//size of-> byte�� ���ϴ� ��.
	//numbers�� 5ĭ¥�� �迭�̴ϱ� 20
	//�ֳĸ� int 5�� �����ϴ� �Ű� int�� ���� 4byte�ϱ�. size=20/4=5
	//c������ [5]�ο��� ������ ��������.
	for (int i = 0; i < 5; i++)
	{
		//int num;
		//scanf_s("%d", &num);
		//numbers[i] = num;
		printf("%d��° ���� �Է�\n", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int min = numbers[0]; // ���� ù��° ���ڸ� �ִ�, �ּҷ� '����'�Ѵ�.
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i]);
		{
			min = numbers[i];
		}

	}
	printf("�ִ�: %d, �ּڰ�: %d\n", max, min);




	return 0;
}