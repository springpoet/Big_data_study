
#include<stdio.h>
	//3��.
char* season(int month)
{
	switch (month)
	{
	case 12: 	
	case 1: 	
	case 2: 
		return "�ܿ�";   
	case 3:	
	case 4:	
	case 5:
		return "��";
	case 6:	
	case 7:	
	case 8:
		return "����";
	case 9:	
	case 10: 
	case 11:
		return "����";
	default:
		return "����";
	}
}
	//4��.
int length(char* str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

int main()
{
	//3�� ����.
	int month;
	printf("�� ���ΰ���? ");
	scanf_s("%d", &month);
	printf("%s\n", season(month));
	
	//4�� ����.
	char self[1024];
	rewind(stdin);
	printf("���ڿ� �Է��ϼ��� ");
	gets(self);
	printf("%d\n", length(self)); //8
	return 0;
}