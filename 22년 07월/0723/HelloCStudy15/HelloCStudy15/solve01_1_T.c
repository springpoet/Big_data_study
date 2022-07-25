#include<stdio.h>

//중복 체크하는 함수
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
		printf("숫자 입력하세요");
		scanf_s("%d", &n);
		if (checkDuplicate(numbers, i, n) == 0)
			numbers[i] = n;
		else
			i--;
	}
	return 0;
}