#include<stdio.h>
int main()
{
	int a = 10;
	//lld= long lon Ÿ��
	//&a = a�� �ּ�
	printf("%d, %lld", a, &a);
	//&a ���� ���α׷� ������ �� ���� ���� �ٲ�
	//�� ���α׷��� ������ a�� ������� ������ �ٽ� �޸� �Ҵ��ϱ� ����
	//������:������ �ּҸ� ����
	int* ptr_a = &a;
	int * ptr_a2 = &a;
	int *ptr_a3 = &a;
	
	int* ptr_aa = 10;
	*ptr_aa = 0;
	printf("%d", *ptr_aa);


	double b = 3.14;
	double* b_ptr = &b;

	char c = 'A';
	char* ptr_c = &c;//ptr_c�� ����a�� �����ϴ� ���� c�� ��ġ�� ����
	char* name = "�輺��";//�輺���̶�� ����(7����Ʈ)�� �����ϴ� �޸��� ��ġ
						//""�ȿ� ������ ������ NULL�� ���� ����

	char myname[100] = "�輺��";


	printf("%c %s %s", c, ptr_c, name);


	return 0;
}