#include<stdio.h>

//������, ������ �ּҸ� �����ϴ� Ÿ��

void changeValue(int* p, int v)
{
	*p = v;//p�� ����Ű�� ���� v�� �ٲ۴�.
}
void no_changeValue(int p, int v)
{
	p = v;//�� �ȿ����� ���� �ٲ����� ȣ���� �Լ������� �ٲ��� �ʴ´�.
}
int main()
{
	int ex = 10;
	int* exptr = &ex;
	//int*�� int Ÿ�� ������ ��ġ�� ����
	//�Լ��� �Ű������� �ַ� ����
	//scanf �Ǵ� swap

	changeValue(exptr, 100);
	printf("ex = %d\n", ex);
	changeValue(&ex, 500);
	printf("ex = %d\n", ex);
	no_changeValue(&ex, 1000);//�ȹٲ�
	printf("ex = %d\n", ex);
	return 0;
}