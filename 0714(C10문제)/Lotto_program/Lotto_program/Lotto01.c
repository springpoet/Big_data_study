#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//lotto �迭�� ��ġ�� ���ڰ� ������ break;
//���ڴ� ������������ �ؾ���
void sort(int arr[], int a)
{
	int i, j, k, temp;
	for (i = 0; i < a - 1; i++)//�յ��ڸ� ���ؼ� 
	{
		k = i;
		for (j = i + 1; j < a; j++)
		{
			if (arr[j] < arr[k])
				k = j;
		}

		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;//���� �������� ����
	}
}

int main()
{
	int lotto[6] = { 0 };
	int i = 0, n = 0;
	srand((unsigned)time(NULL));

	while (1)
	{
		int r = rand() % 45 + 1;

		for (i = 0; i < n; i++)
		{
			if (lotto[i] == r)
				break;
		}
		if (n == i)
		{
			lotto[n++] = r;
		}
			if (n >= 6)
			break;
	}
	sort(lotto, 6);

	for (i = 0; i < 6; i++)
		printf("%d ", lotto[i]);
	return 0;
}