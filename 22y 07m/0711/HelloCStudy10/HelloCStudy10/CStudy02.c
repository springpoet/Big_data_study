#include<stdio.h>
//1.��ȯ�� �Ű����� �� �� ���� �Լ�
void printMySelf()//�Լ� ����
{
	printf("�ȳ��ϼ���.\n");
	printf("�輺���Դϴ�.\n");
	printf("�ݰ����ϴ�.\n");
	printf("���� ���α׷��� �л��Դϴ�.\n");
}
//2.�Ű�����(parameter)�� ��ȯ��(return)�� �� �� �ִ� �Լ�
//0�̳� ������ 0��ȯ�ϰ� �ƴ� ��� ���� ����

int MathPower(int num)//�Լ� ����
{
	if (num <= 0)
		return 0;

	return num * num;
}
//3.��ȯ���� ������ �Ű������� ���� �Լ�
char calcul()//�� ���� ���ڸ� �Լ� �ȿ��� �Է¹ް�, �װͿ� ���� ���� ����� ���� - 0 +���� ��ȣ����
{
	printf("ù ��° ���� �Է��غ�����");
	int num1;
	scanf_s("%d", &num1);
	printf("�� ��° ���� �Է��غ�����");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0)
		return '-';
	else if (result == 0)
		return '0';
	else
		return '+';

	return 0;
}
//4.�Ű������� ������ ��ȯ���� ���� �Լ�(3�� �̿��ؼ� �����)
void calcul_sign(int num1, int num2)
{
	int result = num2 - num1;
	if (result < 0)
		printf("��ȣ�� -�Դϴ�.\n");
	else if (result == 0)
		printf("��ȣ�� 0�Դϴ�.\n");
	else
		printf("��ȣ�� +�Դϴ�.\n");
}
int main()
{
	printMySelf();//ȣ��!!(����� �����̱� ������ printf�ʿ�x)
	int result = MathPower(5);//ȣ��!!(���� �˾Ƴ��°� �����̱⶧���� print�ʿ�o)
	printf("5�� ������ %d�Դϴ�.\n", result);
	printf("3�� ������ %d�Դϴ�.\n", MathPower(3));
	result = MathPower(-7);
	printf("result=%d\n", result);

	char sign = calcul();
	printf("��ȣ�� %c�Դϴ�.\n", sign);

	int n1, n2;//�Է��� main���� ���ְ� �ִ�.
	printf("ù��° ��?");
	scanf_s("%d", &n1);
	printf("�ι�° ��?");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2);//n1, n2 �޾Ƽ� ����ؼ� �������
	//calcul_sign(30,30)�̷������� ���� �ٷ� �Է� �ص� ��

	//�Լ��� �̸��� �Ű������� ���� �̸��� �� ����� ��.



	return 0;
}