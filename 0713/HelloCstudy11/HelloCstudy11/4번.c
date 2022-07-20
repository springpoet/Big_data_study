#include<stdio.h>
#include<Windows.h>

void color(char a, char b)
{
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;
	system(color);
}
int main()
{
	char a, b;
	printf("배경색은?\n");
	scanf_s("%c,%c", &a,&b);
	color(a, b);
	printf("------");

	return 0;
}