#include<stdio.h>
int main()
{
	//1.
	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);
	age < 20 ? printf("����\n") : printf("����");
	//2.������ ���� �߰� ����� �� ���¹�. ���׿����ڸ� ��ø�� ��Ų��.
	age < 20 ? (age < 0 ? printf("\n�߸��� �޼���\n"): printf("\n����\n"))
		: printf("\n����\n");
	//3.
	printf("\n���ڸ� �Է��ϼ���.");
	int num;
	scanf_s("%d", &num);

	num > 0 ? printf("\n���\n") : (num == 0 ? printf("\n0\n") : printf("\n����\n"));
	//����� �ٷ� ������ �������� �ƴҰ�� �� ��ȣ ����.
	
	

	return 0;
}