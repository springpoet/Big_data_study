#include<stdio.h>
int main()
{
	int N, V;
	scanf_s("%d", &N);
	int arr[100];
	int sum = 0;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	scanf_s("%d", &V);

	for(int i=0;i<N;i++){
		if (arr[i] == V) {
			sum += 1;
		}
	}

	printf("%d", sum);
	return 0;
}