#include<stdio.h>
int g = 0; //��������, �۷ι� ���� ��� �� 

//���������� �Ű�
//���� l�� updl ������ ������
//���� �����ͼ� ++��
void up1(int l)
{
	l++;
}
//���������� ��ġ(������)�� �Ű�
//�ּ���(��ġ) ������ �갡 ���ϸ� ������ ���� �ٲ�
void up2(int* l)
{

	(*l)++;
}
//���������� �����ϰ� ����.
void up3()
{
	g++;
}
int main()
{
	int local = 10;
	up1(local);
	printf("local=%d\n", local);
	up2(&local);
	printf("local=%d\n", local);
	up3(g);
	printf("g=%d\n", g);
}