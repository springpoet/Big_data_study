#include<stdio.h>
int main()
{
	//1.
	printf("ù��° ���� �Է�. ");
	char s1[1024];
	int diff = 'a' - 'A';
	gets(s1);
	for (int i = 0; s1[i] != NULL; i++) //NULL���� ���ö������� ����(NULL�� ���ڿ��� �������̱� ����)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= diff;
			//s1[i] -= 32;
		}
	}
	printf("%s", s1);
	//2.
	printf("ù��° ���� �Է�. ");
	gets(s1);
	for (int i = 0; s1[i] != NULL; i++) //NULL���� ���ö������� ����(NULL�� ���ڿ��� �������̱� ����)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += diff;
			//s1[i] += 32;
		}
	}
	printf("%s", s1);

	//3.
	printf("���� �ٽ� �Է��غ�����");
	char s2[1024];
	gets(s2);
	for (int i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] += diff;
		else if (s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] -= diff;
	}
	printf("%s\n", s2);

	//4.�������
	char r[1024];
	int index = 0;//���ڿ��� ����?
	int count = 0;
	while (s2[index] != NULL)
		index++;//ex)abcdd�Ͻ� index=5���� �����
	//index�� s2�� ���� ��(NULL)�� ������ ��
	//abc �Է��ϸ� abc'\0'�̷��� �Ǵµ�
	//index-1�̸� c�� ����Ŵ.

	//i--�ϸ鼭 ù��° ���ڱ��� ����
	//count�� r�迭�� �ε���.
	//s2�� �ִ� ���ڸ� �޺κк��� �����;��ϴµ� r�迭�� �պκк��� ä������

	for (int i = index - 1; i >= 0; i--, count++) //�� 5������ ��(-1�� �ΰ� ����)���� ���� �ϳ��� ���̸� �о
	{
		printf("%c", s2[i]);//�Ųٷ� �� �� ���
		r[count] = s2[i];//�Ųٷ� �� �� �ױ�. �������� �ڿ������� �а� �ؿ� ���� ���� ������� ���.
	}
	r[count] = NULL;//���ڿ� ���� �ΰ��� �� �߰��ؾߵ�.
	printf("\n%s\n", r);

	return 0;
}