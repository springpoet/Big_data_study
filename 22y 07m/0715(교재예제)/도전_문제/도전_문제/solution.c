#include<stdio.h>

void function2(int a2, int b2)
{
	int i;
	while (a2 <= b2) //a2�� b2���� Ŀ���� ����.
	{
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", a2, i, a2 * i);
		printf("\n");
		a2++;
	}
}

int function3(int a3, int b3)
{
	if (a3 < b3)
	{
		int temp = a3;
		a3 = b3;
		b3 = temp;
	}
	while (b3 != 0)
	{
		int temp2 = a3 % b3;
		a3 = b3;
		b3 = temp2;

	}
	//while(1)
	//{
	//	int temp = a3;
	//	a3 = a3 % b3;
	//	b3=temp;
	//}
	return a3;
}
int main()
{
	//1.
	int a1;
	printf("10���� �Է�: ");
	scanf_s("%d", &a1);

	printf("16������ ��� : %x\n", a1);

	printf("\n--------------\n");

	//2.
	int a2, b2;

	printf("�� ���� �Է��ϼ���. : ");
	scanf_s("%d,%d", &a2, &b2);
	if (a2 < b2)
		function2(a2, b2);
	else//b2�� �� Ŭ ��� �ٲ㼭 �Է�.
		function2(b2, a2);

	printf("\n--------------\n");

	//3.
	int a3;
	int b3;
	printf("�� ���� �Է��ϼ���. : ");
	scanf_s("%d,%d", &a3, &b3);
	function3(a3, b3);
	printf("%d\n", function3(a3, b3));

	printf("\n--------------\n");

	//4.
	int money4;
	int bread4 = 500;
	int snack4 = 700;
	int coke4 = 400;
	int bread4_n, snack4_n, coke4_n;//����
	printf("���� ������ �ִ� �ݾ� : ");
	scanf_s("%d", &money4);
	//�ϳ����� ������ �����
	for (bread4_n = 1; money4 - (bread4_n * bread4) > 0; bread4_n++)
		//���� n�� ������ 0���� Ŀ����
	{
		for (snack4_n = 1; money4 - (snack4_n * snack4) > 0; snack4_n++)
			//���ڸ� n�� ���� �� 0���� Ŀ����,
		{
			for (coke4_n = 1; money4 - (coke4_n * coke4) > 0; coke4_n++)
				//�ݶ� n�� ������ 0���� Ŀ����.  (������ �Ұ����ϱ� ����)
			{
				if ((bread4_n * bread4) +(snack4_n * snack4) + (coke4_n * coke4) == money4)
					//�� n ���� �� ���� �� ���� ���� ���� ��� ���)
				{
				printf("ũ���� : %d��, ����� : %d��, �ݶ� : %d��\n", bread4_n, snack4_n, coke4_n);
				}
			}
		}
	}


	printf("\n--------------\n");

	//5.�Ҽ� 10�� ����� ���� , 2���� 1�� ���� �� ���� �ʿ�
	int a5;
	int count5=0;
	for (a5 = 2; count5 <= 20; a5++)
	{
		for (int i = 2; i <= a5; i++)
		{
			if (i == a5)
			{
				printf("%d, ", a5);
				count5++;
			}
			if (a5 % i == 0)
				break;
		}
	}
	printf("\n");


	return 0;
}
			
