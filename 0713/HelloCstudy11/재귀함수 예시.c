#include<stdio.h>
void ww(); //����Լ� ����
int main()
{
	ww();  //�Լ� ȣ��
	return 0;
}


void ww() //����Լ� ����
{
	printf("����\n");

	ww();  //�ڽ��� �ٽ� ȣ��
}


