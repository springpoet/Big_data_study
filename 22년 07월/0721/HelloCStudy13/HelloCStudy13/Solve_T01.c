#include<stdio.h>

//1��
void findBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
		return; //return Ÿ���� void�� a�� ���� �� �� ����.
				//void �� ��� return�� �� ��� ��.
	}
	printf("%d\n", b);
}

//2��
int findBigReturn(int a, int b)
{
	if (a >= b)
		return a;//else �� ��� ��.
	return b;
}


int main()
{
	//main���� �غ���
	//1��
	int a, b;
	printf("���� �� �� �Է��ϼ���. ");
	scanf_s("%d,%d", &a, &b);
	//���׿�����
	a >= b ? printf("%d\n", a) : printf("%d\n", b);

	//���׿����� ���� Ǯ��
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	//�Լ� ���
	findBig(a, b);

	//return ���
	int result = findBigReturn(a, b);
	printf("%d\n", result);


	return 0;
}