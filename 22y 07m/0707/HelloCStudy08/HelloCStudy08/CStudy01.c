#include<stdio.h>
int main()
{
	char c[1024] = { NULL, };// NULL������ �ʱ�ȭ
	printf("������ �Է��ϼ���.:");
	gets(c);
	int alphabet[26] = { 0 };
	
	for (int i = 0; c[i] != NULL; i++) //-1 to exclude terminating NULL
	{
		if (c[i] >= 'A' && c[i] <= 'Z') //�빮�ڸ� �ҹ��ڷ� ��ȯ
		{
			c[i] += ('a' - 'A');
		}
		if (c[i] < 'a' || c[i] > 'z')//!,@... ' '
		{
			if (c[i] == ' ')//�����̽��� �ι� �ؾ���
				continue;//������ �׳� �Ѿ�� ����ó��
						//continue�� ���� �ٸ��� ����� ���α׷��� ���� �ȵǰ� a-z������ ���ڸ� ����.
			printf("�߸��� ����\n");
			return 0; //break�� �ص� �������. �׷� ��� �� �ٸ� ���� ��������.
			//break�� �� for���� ��������. return 0;�� ���α׷��� �ƿ� ����
		}
		else
		{
			alphabet[c[i] - 'a']++;
			//c������ i��°�� ��ġ�� ���ڿ��� -'a'(97)�� �ϸ� 0~26���� ���� ���´�.
			//alphabet[i]�� 26ĭ �迭�̹Ƿ� 0=a 1=b '''�ؼ� z=25���ȴ�. �� �ڸ��� ���� �ϳ��� ����.
		}

	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] != 0)
			printf(" '%c'�� %d �����Դϴ�.\n", 'a' + i, alphabet[i]);
	}



	return 0;
}

/*count = c[i] - 'a';
if (count < 26 && count >= 0)
{
	alphabet[count]++;
}
}

for (i = 0; i < 26; i++)
{
	if (alphabet[i]) printf("%c�� %d�����Դϴ�.\n", 'a' + i, alphabet[i]);
}*/