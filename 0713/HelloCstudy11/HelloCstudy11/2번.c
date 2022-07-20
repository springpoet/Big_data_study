#include<stdio.h>
int time(int sec)
{
	int h, m;
		h = sec / 60;
		m = sec % 60;

	if (sec >= 3600 || sec<0)
	{
		printf("오류 메세지");
	}

	else
	{
		printf("%d분 %d초", h, m);
	}
	printf("%d", m);
	return m;
}

int main()
{
	int sec;
	printf("몇 초 인가요?");
	scanf_s("%d", &sec);
	time(sec);

	return 0;
}