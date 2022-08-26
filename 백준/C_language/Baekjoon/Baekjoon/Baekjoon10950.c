#include<stdio.h>
int main()
{
	int T;
	scanf_s("%d", &T);
	int A, B;
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	
	return 0;
}