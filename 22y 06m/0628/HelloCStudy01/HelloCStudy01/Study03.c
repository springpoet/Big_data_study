#include<stdio.h>
int main()
{
	//���� ü��
	//%d => decimal(10����), ����=�Ҽ����� ���� ����
	//%f => float(�Ǽ�)
	//%c => charactor : ����(1����), ����ǥ ���
	//%s => string : ���ڿ�(���� ���� ����), �ֵ���ǥ ���
	printf("%d ", 1+1);
	printf("%f ", 1.0 / 3);
	printf("%f ", 1 / 3);
	printf("%d ", 1 / 3);
	printf("%c ", 'A');
	//�ƽ�Ű �ڵ������ A=65
	printf("%d ", 'A');
	printf("%s ", "�輺��");
	printf("%c  \n", '��');
	printf("�� �̸��� %s�Դϴ�.\n", "�輺��");
	printf("�� �������� %c�Դϴ�.\n", 'B');
	printf("�� ���̴� %d���̰� ���� %d����Դϴ�.\n", 28, 1995);
	printf("�� MBTI�� %s�̰�, �� Ű�� %f�Դϴ�.\n", "ISFP", 175.0);
	printf("�� ������ \"%s\"�Դϴ�.\n", "�ƾ���");

	return 0;
}