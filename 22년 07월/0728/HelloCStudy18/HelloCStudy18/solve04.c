#include<stdio.h>
struct grade
{
	char name[20];
	int subject;
	int score;
}typedef grade;
int main()
{
	
	//1��.
	struct game2D
	{
		char name[20];
		int x;
		int y;
	}typedef game2D;

	//�׳� ���.
	game2D q1_1 = { .name = "�輺��", .x = 49, .y = 51 };
	game2D q1_2 = { .name = "�ܺ���",.x = 12,.y = 101 };
	printf("%s�� x ��ǥ : %d, y ��ǥ : %d\n", q1_1.name ,q1_1.x, q1_1.y);
	printf("%s�� x ��ǥ : %d, y ��ǥ : %d\n", q1_2.name,q1_2.x, q1_2.y);

	//�Է� �ް� ���.
	game2D q1[2];
	for (int i = 0; i < 2; i++)
	{
		printf("�г��� �Է��ض� : ");
		rewind(stdin);
		gets(q1[i].name);
		printf("x ��ǥ�� y ��ǥ �Է� : ");
		scanf_s("%d %d", &q1[i].x, &q1[i].y);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%s�� x��ǥ : % d, y��ǥ : % d\n", q1[i].name, q1[i].x, q1[i].y);
	}


	//2��.
	struct game3D
	{
		char name[20];
		int x;
		int y;
		int z;
	}typedef game3D;

	//�׳� ���.
	game3D q2_1 = { .name="�輺��",.x = 21, .y = 24, .z = 91};
	game3D q2_2 = { .name="�ܺ���",.x = 46,.y = 152, .z = 53};
	printf("%s�� x ��ǥ : %d, y ��ǥ : %d, z ��ǥ : %d\n", q2_1.name, q2_1.x, q2_1.y, q2_2.z);
	printf("%s�� x ��ǥ : %d, y ��ǥ : %d, z ��ǥ : %d\n", q2_2.name, q2_2.x, q2_2.y, q2_2.z);

	//�Է� �� ���.
	game3D q2[2];
	for (int i = 0; i < 2; i++)
	{
		printf("�г��� �Է� : ");
		rewind(stdin);
		gets(q2[i].name);
		printf("x ��ǥ�� y ��ǥ z��ǥ �Է� : ");
		scanf_s("%d %d %d", &q2[i].x, &q2[i].y, &q2[i].z);
	}
	for (int i = 0; i < 2; i++)
	{
		rewind(stdin);
		printf("%s�� x��ǥ : % d, y��ǥ : %d, z��ǥ : %d\n", q2[i].name,q2[i].x, q2[i].y, q2[i].z);
	}

	//3��.
	struct hospital
	{
		char animal[100];
	}typedef hospital;
	hospital q3_1 = { .animal = "���پƾƾ�" };
	hospital q3_2 = { .animal = "�����" };
	printf("���������� %s�� �ִ�.\n", q3_1.animal);
	printf("���������� %s�� �ִ�.\n", q3_2.animal);
	hospital q3[3];
	for (int i = 0; i < 3; i++)
	{
		printf("���� �����ִ�? : ");
		gets(q3[i].animal);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("�츮 �������� %s(��)�� �ֽ��ϴ�.\n", q3[i].animal);
	}

	//4��.
	struct address
	{
		char name[20];
		char si[20];
		char gu[20];
	}typedef address;

	//�ٷ� ���.
	address q4_1 = {.name="�輺��",.si = "�뱸������",.gu = "������"};
	address q4_2 = {.name="�����",.si = "����Ư����",.gu = "���Ǳ�"};
	printf("%s(��)�� %s, %s�� ��� �ִ�.\n", q4_1.name, q4_1.si, q4_1.gu);
	printf("%s(��)�� %s, %s�� ��� �ִ�.\n", q4_2.name, q4_2.si, q4_2.gu);
	
	//�Է� �� ���.
	address q4[3];
	for (int i = 0; i < 3; i++)
	{
		printf("�̸��� �Է��ϼ���. : ");
		rewind(stdin);
		gets(q4[i].name);
		printf("�ø� �Է��ϼ��� : ");
		rewind(stdin);
		gets(q4[i].si);
		printf("���� �Է��ϼ��� : ");
		rewind(stdin);
		gets(q4[i].gu);
	
	}
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		printf("%s(��)�� ��� ���� %s %s�Դϴ�.\n", q4[i].name, q4[i].si, q4[i].gu);
	}
	return 0;
}