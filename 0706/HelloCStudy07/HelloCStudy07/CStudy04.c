#include<stdio.h>
int main()
{
	//2. ���ڿ� 2�� �Է¹ް� 2���� ������ ���θ� ���
	//���ڿ�=���� Ȥ�� string�̶�� ��
	char c = 'A';
	char mbti[5] = "ISFP";
	char* m = mbti;
	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B';
	//bType[2] = NULL 
	printf("%c", bType);
	char bloodType[3] = "AB";
	char name[7] = "�輺��";

	//���ڿ� �Է¹ޱ�
	printf("mbti��?\n");
	gets(mbti);

	//���� �Է¹ޱ�
	printf("���ĺ� �ϳ� �Է��ϱ�");
	rewind(stdin);//������ �Է¹��� �� \n���۰� ���� �ֱ� ������ �����ؾ���.
	//gets()�ڿ��� �� �ʿ����.
	c = getchar();
	printf("%s %c", mbti, c);

	printf("�ٽ� ���� �Է�");
	c = getchar();
	printf("c=%c\n", c);
	//rewind �� �����ϱ� \n�� getchar�� ������.
	//���ڸ� �Է¹������� rewind �Ƚᵵ ��. ���ڳ� ���ڿ� �Է½� �ʿ�.
	//���ڳ�, ����, ���ڿ��� ���� �����͸� �Է��ϰ� ���� �� �ڿ� ���ڳ�
	//���ڿ��� �� �Է��� ��� ����.
	//scanf�� getchar�� �� ���̶� ������ ���¿��� �ٷ� ������ ���� �Է� �޾ƾ� �� ��쿡 ����
	//����� ������ gets�� ������ �Է¹޾Ҵٸ� �� �� �Ƚᵵ ��

	return 0;
}