#include<stdio.h>
int main()
{

	//���ϴ� ��
	//��ǻ�Ϳ����� ���ڿܿ� ���� �� ������ ��
	//�Ǽ��� �����ϴ� ����
	int a = 10; //4Byte //ó���� ���� �� "����(Declare)"
	a = 100; //a��� ������ 10���� 100���� �ٲ�

	//�Ǽ��� �����ϴ� ����
	double b = 3.14; //8Byte

	//���ڸ� �����ϴ� ����(��, �ѱ� ���� �ȵ�)
	char c = 'A'; //1Byte

	//������ �����ϴ°� long, �Ǽ��� float ���� ������ �� 3���� ���� ���� ����


	int myBirth = 1995;
	printf("�� ���̴� %d���̴�.\n", 2023 - myBirth);

	return 0;

}