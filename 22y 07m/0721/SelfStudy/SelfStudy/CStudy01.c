#include<stdio.h>

void enterKey()
{
	printf("\n");
}

void printPowerNumber(int n)
{
	printf("%d", n * n);
}

int inputNum()//���ڸ� �Է¹���
{
	int n;
	printf("���� �Է��ؿ�\n");
	scanf_s("%d", &n);
	return n;
}
int powerNum(int n, int p)//n:����,p:���� ��
{
	if (p <= 0)//���� ������ ���� ����
		return 1;
	else if (p == 1)
		return n;
	else
	{
		int num = n;
		for (int i = 1; i < p; i++)
			n *= num;
	}
	return n;
}
int printNumber(int a)
{
	printf("%d", a);
}
int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printNumber(30);
	enterKey();
	printNumber(powerNum(inputNum(), 3));
	enterKey();

	num = inputNum();
	int power = inputNum();
	printNumber(powerNum(num, power));

	return 0;
}