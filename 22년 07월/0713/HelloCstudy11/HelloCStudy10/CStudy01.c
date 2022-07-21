#include<stdio.h>

int main() {
	int result = printf("Hello");
	printf("\n%d\n", result);
	int n, m;
	int a = scanf_s("%d", &n);
	int b = scanf_s("%d %d", &n, &m);
	result = printf("%d %d", n, m);
	printf("\n result=%d a=%d, b=%d   \n", result, a, b);


	return 0;
}