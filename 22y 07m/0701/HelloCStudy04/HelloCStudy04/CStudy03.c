#include<stdio.h>
int main()
{
	//�ݺ���

	//3���� 
	//���� goto���� �̿��� ���� ������ ��������
	//�Ȱ��� ������ 10�� ����ϰų� 1���� 10������ ���� ���ؾ� �� ���

	if (0)
	{

		//1.for��
		for (int i = 0; i < 10; i++)
			printf("�̵��� ������ �ȳ��ϼ���.\n");
		int sum =0;
		for (int i = 1; i < 10; i++)
			sum += i;
		printf("1���� 10������ �� : %d\n", sum);

		//for ���� �߰�ȣ�� ���� �� �ִ�.
		for (int i = 0; i < 5; i++)
		{
			if (i % 2 == 0)
				printf("*");
			else
				printf("1");
		}

	}
	//1.
	if (0)
	{

	int sum = 0;
	for (int i = 1; i < 101; i++)
		sum += i;
	printf("1���� 100������ �� : %d\n", sum);

	}
	//2.
	int sum1 = 0;
	int i;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			sum1 += i;
	}
	printf("%d\n",sum1);
	
	//3.1���� n������ ��
	int sum2 = 0;
	printf("1���� n������ ���� ����մϴ�.\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < n; i++)
	{
		sum2 *= i;
	}

	printf("%d", sum2);






	//2.while��
	// 
	//3.do while��


	return 0;
}