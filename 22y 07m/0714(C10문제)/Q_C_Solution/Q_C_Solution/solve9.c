#include<stdio.h>
int fact(int num)
{
	//����Լ��� �ݵ�� ������ ����Ǵ� ������ ������� ��
	if (num <= 1)
		return 1;//���� ����.

	return num * fact(num - 1);
}
int main()
{
	printf("%d", fact(5));

	return 0;
}