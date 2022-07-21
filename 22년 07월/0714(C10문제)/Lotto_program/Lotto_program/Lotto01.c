#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//lotto 배열이 겹치는 숫자가 있으면 break;
//숫자는 오름차순으로 해야함
void sort(int arr[], int a)
{
	int i, j, k, temp;
	for (i = 0; i < a - 1; i++)//앞뒤자리 비교해서 
	{
		k = i;
		for (j = i + 1; j < a; j++)
		{
			if (arr[j] < arr[k])
				k = j;
		}

		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;//숫자 오름차순 정렬
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