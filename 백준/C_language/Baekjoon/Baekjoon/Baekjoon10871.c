#include<stdio.h>
int main()
{
	int N, X;
	int A;

	scanf_s("%d %d", &N, &X);
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A);
		if (X > A) {
			printf("%d ", A);
		}
	}
	return 0;
}