#include<stdio.h>

//�ߺ� üũ�ϴ� �Լ�
int checkDuplicate(int arr[], int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		if (n == arr[i])
			return 1;
	}
	return 0;
}
int main()
{
	int numbers[5];
	for (int i= 0; i < 5; i++)
	{
		int n;
		printf("���� �Է��ϼ���");
		scanf_s("%d", &n);
		if (checkDuplicate(numbers, i, n) == 0)
			numbers[i] = n;
		else
			i--;
	}
	return 0;
}