#include<stdio.h>

int a;
int b;

int bigNum(int a, int b);
int bigbigNum(int a, int b);
void switching();
int switchPointer();



int main()
{
	//1.
	int num1, num2;
	printf("�� ���ڸ� �Է��ϼ��� ");
	scanf_s("%d,%d",&num1,&num2);
	bigNum(num1, num2);

	//2.
	int num3, num4;
	printf("�� ���ڸ� �Է��ϼ��� ");
	scanf_s("%d,%d", &num3, &num4);
	bigbigNum(num3, num4);
	int result = bigbigNum(num3, num4);
	printf("%d\n",bigbigNum(num3,num4));

	//3.
	//�������� a,b�� �����߱� ������ int �� �ʿ� ����
	printf("���� �� �� �Է�");
	scanf_s("%d,%d", &a, &b);
	printf("�� : %d, %d\n", a, b);
	switching();
	printf("�� : %d, %d\n", a, b);

	int num5, num6;
	printf("�ٲ� �� �� �Է� ");
	scanf_s("%d,%d", &num5, &num6);
	switchPointer(&num5, &num6); //�ּ��� ������
	printf("��� : %d, %d", num5, num6); 


	return 0;
}

int bigNum(int a, int b)
{
	if (a < b)
	{
		printf("%d\n",b);
		return;
	}
	printf("%d\n",a);
}
int bigbigNum(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

//3�� �Լ�
void switching()
{
	int temp = a;
	a = b;
	b = temp;
}
//3�� ������
int switchPointer(int* a, int* b) //�ѱ� �ּ��� �ޱ�, a, b�� �ּ���
{
	int temp = *a; //�ּ����� �ش��ϴ� �� a, b�� ��
		*a = *b;
		*b = temp;
}