#include<stdio.h>
int main() {
	char a[101];
	int count = 0;
	gets(a);
	rewind(stdin);
	for (int i = 0; a[i]!='\0'; i++) {
		count+=1;
	}
	printf("%d\n", count);

	return 0;
}