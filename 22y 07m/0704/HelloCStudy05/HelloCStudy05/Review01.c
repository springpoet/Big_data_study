#include<stdio.h>
int main()
{
	//1.
	printf("�ȳ��ϼ���. �� �̸��� �輺���Դϴ�.\n");
	
	//2.
	int age;
	printf("���̴�? ");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n", age);

	//3.
	int a, b;
	printf("�Է�a: ");
	scanf_s("%d",  &a);
	printf("�Է�b: ");
	scanf_s("%d", &b);
	printf("���:%d\n", (a * a) + (b * b));

	//4. 
	char name[100];
	printf("���ڸ� �л��� �̸���?\n");
	rewind(stdin);
	gets(name); //���� �ʿ��� ��
	// scanf_s("%s", &name, sizeof(name));
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n", name);

	//5. �޷� �Է� �� ���
	printf("�� �޷�?");
	double dollar;
	scanf_s("%lf", &dollar);
	printf("��� : %lf��\n", dollar * 1298.89);








	return 0;
}