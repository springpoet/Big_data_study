#include<stdio.h>
int changeNum(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int inputNum()
{
	int a;
	scanf_s("%d", &a);
	return a;
}
int printNum(int a)
{
	printf("%d\n", a);
}
int main()
{
	int a = 3;
	int b = 5;
	printf("�� : %d, %d\n", a, b);
	changeNum(&a, &b); 
	//�׳� a,b�� �Է��� ��� 3, 5��� ���ڸ� ��
	//�츮�� ���ϴ°� a,b�� ���� �ٲٴ� ���̱� ������ &�� �ٿ�
	//�ش� �ּ��� ���� �ٲٰ��� ��
	printf("�� : %d, %d\n", a, b);

	int num1;
	int num2;
	printf("�� ���� �Է��ϼ���. ");
	scanf_s("%d %d", &num1, &num2);
	printf("�� : %d %d\n", num1, num2);
	changeNum(&num1, &num2);
	printf("�� : %d %d\n", num1, num2);


	int num3 = inputNum();
	int num4 = inputNum();

	printNum(num3);
	printNum(num4);

	changeNum(&num3,&num4);

	printNum(num3);
	printNum(num4);
	return 0;
}