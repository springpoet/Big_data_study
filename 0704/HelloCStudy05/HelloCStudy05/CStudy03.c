#include<stdio.h>
int main()
{
	//�ݺ����� ���� �� �˾ƺ���
	//1. for �� ���ѷ��� �����
	//for (;;)
	//for(int i=0; i<1;)
	for (int i = 0;; i++)
	{
		printf("%d\n",i);
		break;
	}

	//2.while���� ��ø�� �ǹǷ� while������ ������ © �� �ִ�.
	char name[100];
		printf("�̸�?");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++) // \0=NULL
		printf("%c", name[i]);
	//��� ���ڿ��� ���� NULL�̹Ƿ� �� ���ڿ��� ������ �� ���� ��

	return 0;
}