#include<stdio.h>
int main()
{
	int age;
	printf("���̸� �Է��ϼ���.");
	scanf_s("%d", &age);//%d�ڿ� \n ������ ����. ���� �Է¹ް� �ִ°� ������ ���� �ٽ� ����
	printf("�� ���� : %d\n", age);
	printf("���� %d����Դϴ�.\n", 2022 + 1 - age);

	//4 ���� ���̿� �ѷ�
	int r;
	printf("�������� �Է��ϼ���.");
	scanf_s("%d", & r);
	printf("���� ���� : %f\n", r * r * 3.14);
	printf("���� �ѷ� : %f\n", r * 2 * 3.14);

	//5 Byte�� bit ��ȯ
	printf("�� Byte?\n");
	int Byte;
	scanf_s("%d", &Byte);
	printf("%d Byte = %d bit\n", Byte, Byte * 8);

	//6
	int bit;
	printf("�� bit?");
	scanf_s("%d", &bit);
	printf("%d bit = %d Byte\n", bit, bit / 8);

	//7 
	int myByte = Byte;
	int mybit = Byte * 8;
	
	printf("%d Btye * 8 = %d bit\n", myByte, mybit);

	return 0; //�ڵ� �̵� : alt + ȭ��ǥ�� ���Ʒ� �̵� ����
}
