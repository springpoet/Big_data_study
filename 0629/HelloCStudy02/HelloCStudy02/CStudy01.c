#include<stdio.h>
int main()
{
	int age = 28;//���� ���� ��
	long bigValue = 9999999999;
	short smallValue = 5;//�Ǽ�
	double pi_value = 3.1415;//���� ��
	float myPi = 3.14; //8Byte

	char MyInitial = 'K';
	//999999999�� int���� ���� �� overflow �߻�.
	int nowYear = 2022;
	printf("���� �¾ ������ %d�Դϴ�.\n", nowYear + 1 - age);
	printf("������ ���� %f�Դϴ�.\n", pi_value);
	return 0;

	//������ ���ؼ� ���� �Է� �޾ƺ���.
	//���� �Է��� ������ �������� ���غ���.

	int input;
	printf("���ڸ� �Է����ּ���.");
	scanf_s("%d", &input);
	printf("�� ������ ������ %d�Դϴ�.\n", input * input);
	int result = input * input;
	printf("��:%d\n", result);

	//1.int age ��� ������ ����
	//2.�� ������ ���� ���̸� �Է��Ѵ�.
	//3.�� ���̴� age���Դϴ�. ���
	//age ������ �̿��ؼ� ���� �¾ ������ Ȯ���غ���.(�ѱ��� ���̸� �������� �Ѵ�.)
	int age;
	int nowYear = 2022;
	printf("���̸� �Է��ϼ���.");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);
	printf("���� �¾ ������ %d�� �Դϴ�.\n", nowYear + 1 - age);
	int result = nowYear + 1 - age;
	printf("��:%d\n", result);

	//4.
	int input;
	float myPi = 3.14;
	printf("�������� �Է��ϼ���.");
	scanf_s("%d", &input);
	printf("���� ����: %f.\n", input * input * myPi);
	printf("���� �ѷ�: %f.\n", input * 2 * myPi);
	int result1 = input * input * myPi;
	int result2 = input * 2 * myPi;

	//5.
	int Byte;
	printf("Byte�� �Է��ϼ���.");
	scanf_s("%d", &Byte);
	printf("���:%dbit.\n", Byte * 8);

	//6. 
	int bit;
	printf("bit�� �Է��ϼ���.");
	scanf_s("%d", &bit);
	printf("���:%dByte\n", bit / 8);

	//7
	printf("%d*8=%d ���Դϴ�.", Byte, bit);




	return 0;


}