#include<stdio.h>
#define MAX 1024//��ũ�� ��� ����, �����δ� ũ�� ���� �ȵ�(malloc,calloc�����)
int main()
{
	//2.���ĺ� ���� ���� ��ġ
	char input[MAX] = { NULL };
	printf("������ �Է�\n");
	gets(input);
	int charAlpha[26] = { 0 };
	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] += ('a' - 'A');
		 if (input[i] < 'a' || input[i]>'z') 
			 //else if �� �ƴ϶� if�ؾ���.
			 //else if �� ��� �빮�ڴ� �ν��� ����.
			continue;//�����ڸ� ���� ������ ��ŵ.
		else
		{
			if (charAlpha[input[i] - 'a'] == 0)
				charAlpha[input[i] - 'a'] = i + 1;
			//ù��¡ �� 0�� �ƴ� 1�� �־�� �ϹǷ� i+1�� �ִ´�
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (charAlpha[i] != 0)
			printf("%c�� %d��° ���� ����\n", 'a' + i, charAlpha[i]);
	}
	return 0;
}