#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_num(int n)//������ȣ ���� �Լ�

void getISOTime(char* buffer, size_t bufferSize);

int main()
{
	int n = 1;
	char buf[80];

	while (n != 0) 
	{
	//���� �ð�/��¥ ���
		getISOTime(buf, sizeof(buf));
		printf("%s\n", buf);
	
		printf("�� �� �����ұ��?");
		scanf_s("%d", &n);
		rand_num(n);
	}






	return 0;
}