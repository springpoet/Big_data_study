#include<stdio.h>
void Swap(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
void gugudan()
{
	int num1, num2;
	printf("�� �� ���� �� �� ����?");
	scanf_s("%d %d", &num1, &num2);
	int num3, num4;
	printf("������ ������ ��??");
	scanf_s("%d %d", &num3, &num4);
	for (int i = num1; i <= num2; i++)
	{
		for (int j = num3; j <= num4; j++)
		{
			printf("%2d * %2d=%2d", i, j, i * j);
			
		}
	}
}
int main()
{
	int a, b, c;
	int a2, b2, c2;
	printf("���� ���� �Է� ");
	scanf_s("%d %d %d", &a, &b, &c);
	a2 = a;
	b2 = b;
	c2 = c;
	printf("�� : %d %d %d\n", a, b, c);
	//1. while���� �� ��� �ʱ� a,b,c�� a2,b2,c3�� ���� ���� ������
	//2. �켱 1�� �����ϴ� do while �� ���
	printf("%d %d %d\n", a, b, c);
	do
	{
		Swap(&a, &b, &c);
		printf("a=%d, b=%d,c=%d\n", a, b, c);
	} while (a2!=a && b2!=b && c2!=c);



	/*for (int i = 0; i < 3; i++)
	{
		if (Swap(&a, &b, &c)==(a,b,c))
			break;

	}
	*/
	gugudan();

}