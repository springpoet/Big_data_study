#include<stdio.h>
int main()
{
	//
	int number;
	printf("���� �Է��ϼ���.");
	scanf_s("%d", &number); //number ������ �ּҿ� ������ ���� �������� ��
	printf("number=%d\n", number);
	//���ǹ�
	if (number > 0)
	{
		printf("number�� �������");
	}
	else if (number == 0)
	{
		printf("number�� 0�̿���");
	}
	else //����
	{
		printf("number�� ��������");
	}

	for (int i = 0; i < 10; i++)
		printf("�̵��� ������\n");
	int count = 0;
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}
	do
	{
		printf("count=%d,count");
	} while (count<10);//1���� ������ ����...
	count++;
	return 0;
}