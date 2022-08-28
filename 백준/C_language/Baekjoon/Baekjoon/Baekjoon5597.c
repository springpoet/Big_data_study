#include<stdio.h>
int main()
{
	int arr[31] = { 0, };
	int n;
	for (int i = 0; i < 28; i++) {
		scanf_s("%d", &n);
		arr[n]++;
	}
	for (int i = 1; i < 31; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}