#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		printf(">");
	}
	else if (a < b) {
		printf("<");
	}
	else {
		printf("==");
	}

	return 0;
}