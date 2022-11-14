#include<stdio.h>
int main() {
	
	int sum = 0;
	for (int i = 1; i <= 26; i++) {
		sum += i * 1000;
	}
	printf("%d", sum);
	return 0;
}