#include<stdio.h>
void printYourName(char n[])//char* n �ᵵ ��
{
	printf("����� �̸��� %s�Դϴ�.\n", n);
}
char* printABC()
{
	return "abc\n";
}

//�Ű����� ���� ���ڿ��� �Է¹޾Ƽ� ���� �� ��(�� ��)
char* returnMyInfo()
{
	static char mbti[5];
	//static�� ������ �Լ����� ���� ���� �Լ��� ������ �����.
	//�����͸� ���� ��ġ�� ����Ű�� �̹� ����� ��ġ�̱� ������ �̻��� ���� ����.
	//static�� ���� ������ ������ �����ؾ� �Ѵ�.
	printf("mbti? ");
	gets(mbti);
	return mbti;
}

char* returnMyMBTI(char* mbti)
{
	return mbti; //�Ű������� ���� �� �ٷ� ���� �� ��(��)
}
int main()
{
	printf("�̸� �Է� ");
	char name[100];
	gets(name);
	printYourName(name);
	printf("%s", printABC());

	printf("%s\n", returnMyInfo());
	printf("%s\n", returnMyMBTI("ISFP"));//�����Ƽ� scanf �����ϰ� �ٷ� �Է�
	printf("%s\n", returnMyMBTI(name));

	return 0;
}