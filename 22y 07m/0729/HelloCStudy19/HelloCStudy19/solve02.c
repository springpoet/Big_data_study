#include<stdio.h>
#include"Mystructures.h"

int main()
{
	KBStudent s1 = { .cScore = 100,.javaScore = 0,.name = "�輺��" };
	KBStudent s2;
	printf("�̸���? ");
	gets(s2.name);
	printf("c ������ ?");
	scanf_s("%d", &s2.cScore);
	printf("java ������? ");
	scanf_s("%d", &s2.javaScore);
	printf("%s�� c ���� : %d, java ���� : %d\n", s2.name, s2.cScore, s2.javaScore);

	//3��
	KBStudent s3[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� c ����, java ����, �̸� ������ �Է� : ",i+1);
		scanf_s("%d %d", &s3[i].cScore, &s3[i].javaScore);
		gets(s3[i].name);
	}
		rewind(stdin);
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� �л��� �̸��� %s�̸� c ������ %d���̰� java ������ %d�Դϴ�.\n",
			i + 1, s3[i].name, s3[i].cScore, s3[i].javaScore);
	}
	
	//4��.
	int c_sum = 0;
	int java_sum = 0;
	for (int i = 0; i < 5; i++)
	{
		c_sum += s3[i].cScore;
		java_sum += s3[i].javaScore;
	}
	printf("c������ �� : %d, java������ �� : %d", c_sum, java_sum);

	//5��.

	return 0;
}