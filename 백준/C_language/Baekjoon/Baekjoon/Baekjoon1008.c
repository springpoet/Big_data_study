#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("�� ���� �Է��ϼ���. : ");
	scanf_s("%d %d", &a, &b);
	printf("%0.9f", (double)a/b);
	return 0;
}