#include<stdio.h>
int time(int sec)
{
	int h, m;
		h = sec / 60;
		m = sec % 60;

	if (sec >= 3600 || sec<0)
	{
		printf("���� �޼���");
	}

	else
	{
		printf("%d�� %d��", h, m);
	}
	printf("%d", m);
	return m;
}

int main()
{
	int sec;
	printf("�� �� �ΰ���?");
	scanf_s("%d", &sec);
	time(sec);

	return 0;
}