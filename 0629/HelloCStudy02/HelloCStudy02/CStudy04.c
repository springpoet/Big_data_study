#include<stdio.h>
int main()
{
	//1
	printf("�� ���ΰ���?");
	int sec;
	scanf_s("%d", &sec);
	printf("%d�� %d��\n", sec / 60, sec % 60);

	//2
	printf("2x+b�� �� ���ϱ�\n");
	printf("x��?");
	int x, b;//���� ���� x�� b ����
	scanf_s("%d", &x);
	printf("b��?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);

	//3
	printf("�����?");
	rewind(stdin);//char �Է¹ޱ� ���̹Ƿ� rewind, scanf, gets ������ ������ ���ָ��
	//char feel = getchar(); �� �� �ϳ�
	char feel;
	scanf_s("%c", &feel, 1);
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	//gets(mbti);
	scanf_s("%s", mbti, sizeof(mbti));
	printf("������?");
	rewind(stdin);
	char bType[10];
	gets(bType);
	printf("Ű�� ����?");
	rewind(stdin);
	float cm;
	printf("Ű?");
	scanf_s("%f", &cm);
	printf("����?");
	int age;
	scanf_s("%d", &age);
	printf("���� ����� %c�Դϴ�. ��mbti�� %s�̰� �������� %s�Դϴ�. �� Ű�� %.2f�̸�, ���̴� %d�� �Դϴ�.\n", feel, mbti, bType, cm, age);
	//double�� ������ �� %lf �� �޾ƾ���
	//���ڴ� ������ scanf_s
	//���ڴ� getchar, gets �ƹ��ų�
	//double cm; �� ��� ���� �Ʒ�, scanf���� lf�� ����
	//�������� �ݵ�������

	//4,5 printf�� Ǯ� Ǯ��, ������, ������ ���� �̿�.>0630�� �̾ Ǯ��


	printf()





	return 0;
}
