#include<stdio.h>
int main()
{
	//1.��ҹ��� ��ȯ
	//1)��� ��� �빮�ڷ� �ٲ�
	//char eng;
	//printf("���� �Է��ϼ���. ");
	//scanf_s("%c", &eng);
	//if (eng >= 'A' && eng <= 'Z')
	//{
	//	printf("%c=>%c", eng, eng + 32);
	//}
	//else if (eng >= 'a' && eng <= 'z')
	//{
	//	printf("%c=>%c", eng, eng - 32);
	//}
	//else
	//	printf("%c �� ��� �ƴմϴ�.");
	char eng[100];
	printf("��� �Է��ϼ���. ");
	gets(eng);
	int i;
	for (int i = 0; eng[i]; i++)
	{
		if (eng[i] >= 65 && eng[i] <= 90)
		{
			eng[i] = eng[i];
		}
		else if (eng[i] >= 97 && eng[i] <= 122)
		{
			eng[i] = eng[i] - 32;
		}
	}
	printf("%s\n", eng);
	//2.
	char eng2[100];
	rewind(stdin);
	printf("��� �Է��ϼ���. ");
	gets(eng2);
	for (int i = 0; eng2[i]; i++)
	{
		if (eng2[i] >= 65 && eng2[i] <= 90)
		{
			eng2[i] = eng2[i] + 32;
		}
		else if (eng2[i] >= 97 && eng2[i] <= 122)
		{
			eng2[i] = eng2[i];
		}
	}
	printf("%s\n", eng2);
	//3.
	char eng3[100];
	rewind(stdin);
	printf("��� �Է��ϼ���. ");
	gets(eng3);
	for (int i = 0; eng3[i]; i++)
	{
		if (eng3[i] >= 65 && eng3[i] <= 90)
		{
			eng3[i] = eng3[i] + 32;
		}
		else if (eng3[i] >= 97 && eng3[i] <= 122)
		{
			eng3[i] = eng3[i] - 32;
		}
	}
	printf("%s\n", eng3);
	//4.�Է��� ���ڿ��� �Ųٷ� �ٲ㼭 ���
	char sentense[10];
	rewind(stdin);
	printf("��� �Է��ϼ���. ");
	gets(sentense);
	for (i = 0; i <= 10; i++)

		printf("%s", sentense[i]);


	return 0;
}