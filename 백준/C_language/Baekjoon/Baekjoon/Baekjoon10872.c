#include<stdio.h>
int main()
{
	int N=1;
	int sum = 1;
	scanf_s("%d", &N);
	for (int i =2; i <= N; i++) {
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}