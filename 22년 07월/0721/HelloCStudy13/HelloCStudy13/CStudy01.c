#include<stdio.h>
//�Լ�:�ڵ� ��ġ
//�̸� ����� �� �ڵ� ���


//�Լ��� 4���� ����
//��ȯ��(o), �Ű�����(parameter, o)
//��ȯ��(o), �Ű�����(parameter, x)
//��ȯ��(x), �Ű�����(parameter, o)
//��ȯ��(x), �Ű�����(parameter, x)
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
//��ȯ��, �Ű����� �� �� �ִ� ��
int powerNum(int n, int p)//n:����,p:���� ��
{
	if (p <= 0)//���� ������ ���� ����
		return 1;
	else if (p == 1)
		return n;
	else
	{
		int num = n;
	for (int i = 0; i < p-1; i++)
		n *= num;
	}
	return n;
}

//2��.
void printNumber(int n)
{
	printf("%d", n);

}
int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("���� 2�� ���ؼ� �Է¹ް� ����غ�\n");
	
	//1.ȣ���غ���
	enterKey();//���ٶ���
	printPowerNumber(3); //3�� ���� ���
	enterKey();
	int mynum= inputNum();
	powerNum(mynum, 3);//mynum�� ������
	int result = powerNum(mynum, 3);//��� �� ��� ����
	printf("%d", result);//��� �� ���
	enterKey();
	printNumber(30);
	enterKey();
	//3.
	printNumber(powerNum(inputNum(),2));//powerNum=�Է��� ������ p����)
	enterKey();

	//4.
	num = inputNum();
	int power = inputNum();
	printNumber(powerNum(num, power));


	//enterKey();
	//powerNum(num, num);
	//enterKey();
	//printNumber(powerNum(3,4));
	//enterKey();
	//enterKey();
	//printNumber(powerNum(inputNum(), inputNum()));
	

	return 0;
}