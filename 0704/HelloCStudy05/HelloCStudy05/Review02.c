#include<stdio.h>
int main()
{
	if (0)
	{

	//6.
	int num;
	printf("���ڸ� �Է��ϼ���. ");
	scanf_s("%d", &num);
	if (num < 0)
		printf("����!\n");
	else if (num == 0)
		printf("num�� 0!");
	else
	{
		if (num % 2 == 0)
			printf("¦!\n");
		else
			printf("Ȧ!\n");
	}
	//7.������ 5��
	for (int i = 1; i <= 10; i++)
		printf("5x%d=%d\n", i, 5 * i);

	//8.������ n��
	int n;
	printf("������ �� ��? ");
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++)
		printf("%d*%d=%d\n", n, i, n * i);

	//9. 2�ܺ��� 9�� ���
	for (int n = 2; n < 10; n++)
	{
		for (int i = 1; i < 10; i++)
			printf("%d * %d= %d\n", n, i, n * i);
	}

	//10. 1���� n������ ��, 0���� �߸��� �Է��̶� ���
	int sum = 0;
	printf("����� �� �ұ��? ");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum += i; //�� ����
		printf("+%d", i);//�޼��� ���


	}
	printf("=%d\n", sum);

	}
	//10. 1���� n������ ���� ���ϵ� �Ʒ��� ���� ��� ���
//  �� 0 ������ ������ ��� �߸��� �Է��̶� ����ϼ���
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		if (n > 0)
			printf("%d ������ ��:%d", n, sum);
		else if (n <= 0)
			printf("�߸��� �Է�\n");
	}

	return 0;
}