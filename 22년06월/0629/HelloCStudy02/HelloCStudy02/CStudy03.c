#include<stdio.h>
int main()
{
	//���� �Է¿��� 2���� ����� �ִ�
	char c;
	printf("�� ����� ���� +? -? 0?\n");
	scanf_s("%c", &c, 1); //���ڴ� �Է¹��� ������ �޸� ũ�� Byte ���⼭ &�� address
	printf("���� �� ����� %c�Դϴ�.\n", c);
	rewind(stdin); //���� ���� û��, ���͵� �����̴�(LF)
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);
	rewind(stdin);
	printf("�� �̸��� ù ���ڴ�?");
	c = getchar();
	printf("%c\n", c);
	printf("�� �̸��� �� ���ڴ�?");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	//�迭�� �ȹ������..
	char name[100]; //name ������ 100Byte ���尡��
	//���ڿ� �Է� ���� �� �˳��ϰ� ���� �����ϸ� ��,
	//���� �� �°� �����ϰ� �ʹٸ� �Է��ϰ��� �ϴ� Byte+1 ��ŭ ����
	//ex. �ѱ� 3���� �Է� �� ��� [7], ���� 10���� �Է��� ���[11]
	//java, c#, c++���� string �̶�� �ڷ����� ������ c���� ����.
	//����� �����Ϸ��� �迭, �����͸� ��� �������

	printf("�̸���?");
	scanf_s("%s", name, sizeof(name)); //���ڿ��� ���� ���� name �տ� & ��������
	printf("�� �̸��� %s�Դϴ�.\n", name);
	rewind(stdin); //���ڿ��� ���������� ������ �� �Է¹��� ���� rewind �������
	char mbti[100];
	printf("mbti?");
	gets(mbti); //��������� ���� ����
	//scanf_s������ space bar�� ©�� (������ �ȵ�)
	printf("�� mbti�� %s�Դϴ�.\n", mbti);
	//null:�ƹ��͵� ���� ��

	return 0;
}