#include<stdio.h>
int main()
{
	//������=������ �ּ�
	//�迭�� �����ϱ� ���� �����
	int a = 10;
	int* ptr_a = &a;//��ǻ�� ��򰡿� �ִ� a�� ��ġ
	(* ptr_a)++;
	printf("a=%d\n", a);
	a++;
	printf("ptr_a�� ����Ű�� ���� ��: %d\n", *ptr_a);
	printf("a=%d\n", a); //b=13 a=12
	/* ���� ����
	int b = a;
	b++;
	printf("a=%d\n", a);
	*/
	//ptr_a=&a=a�� �ּ�(��ġ), *ptr_a=ptr_a��ġ�� ��=�� a.
	//(*ptr_a)++=ptr_a��ġ�� ���� ������Ŵ









	return 0;
}