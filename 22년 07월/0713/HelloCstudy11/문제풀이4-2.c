#include<stdio.h>
#include<Windows.h>
void four(char a[100])
{
	system(a);
	printf("�����մϴ�.");
}
int main()
{
	/*
	char a[100];
	printf("���ڿ��� �Է��Ͻÿ�");
	gets(a);
	four(a);
	return 0;*/
	
	int aa;
	printf("�����Է�");
	scanf_s("%d", &aa);
	system("color %d", aa);
}