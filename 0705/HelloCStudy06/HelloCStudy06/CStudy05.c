#include<stdio.h>
int main()
{
	char c = 'A';
	char* ptr_c = &c;//ptr_c�� ����a�� �����ϴ� ���� c�� ��ġ�� ����
	char* name = "�輺��";//�輺���̶�� ����(7����Ʈ)�� �����ϴ� �޸��� ��ġ
	//=char name[7]="�輺��"
	//""�ȿ� ������ ������ NULL�� ���� ����

	char myname[100] = "�輺��";


	return 0;
}