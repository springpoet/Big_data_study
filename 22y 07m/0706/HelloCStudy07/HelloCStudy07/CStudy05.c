#include<stdio.h>
int main()
{
	char sentense1[1024];
	char sentense2[1024];

	printf("���ڿ� 1 �Է����ּ���.");
	gets(sentense1);
	printf("���ڿ� 2 �Է����ּ���.");
	gets(sentense2);
	int i = 0;
	for (i = 0; sentense1[i] != '\0' && sentense2[i] != '\0'; i++)

	{
		if (sentense1[i] != sentense2[i])
		{
			i = -1;
			printf("�� ������ �ٸ��ϴ�.\n");
			break;
		}
		if (i != -1)
		{
			if (sentense1[i] == sentense2[i])
				printf("���� ����. %s % s", sentense1, sentense2);
		}
			printf("���� �Ȱ���.%s %s\n", sentense1, sentense2);
	}
	return 0;
}