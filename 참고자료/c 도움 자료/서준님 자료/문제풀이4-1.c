#include<stdio.h>
#include<Windows.h>

void color(char c, char d)
{
	char abc[9] = "color ";
	system("color %c%c", c, d);
	abc[6] = c;
	abc[7] = d;
	abc[8] = NULL;
}

int main()
{
	char a, b;
	printf("¹è°æ»ö?");
	scanf_s("%c %c", &a, &b);
	color(a, b);
	printf("-----");

	return 0;
}