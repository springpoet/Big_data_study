#include<stdio.h>
#include"seven.h"

int main()
{
	int n1, n2;
		char k;
	printf("�� ���� �����ڸ� �Է��Ͻÿ�!");
	scanf_s("%d %d %c", &n1, &n2, &k);
	seven(n1, n2, k);

	return 0;
}