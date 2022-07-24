#include<stdio.h>
//1.
int sum_a_to_b(int a, int b, int c)
{
	int sum = 0;

	for (int i = a; i <= b; i++)
	{
		if (i % c != 0)//c의 배수 제외
			sum += i;
	}
	return sum;
}

//2.
int time(int sec)
{
	if (sec > 3600)
	{
		printf("오류 메세지\n");
		return -1;
	}

	printf("%d분 %d초\n", sec / 60, sec % 60);

	return sec / 60;
}
//3.
void color()
{
	system("color 1c");
}

//4.
void color2(char a, char b)
{
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;
	system(color);

}
//5.
int sum5()
{
	int sum = 0;
	printf("1");
	for (int i = 2; i <= 100; i++)
	{
		printf("+%d", i);
		sum += i;
	}
	printf("\ntotal = %d\n", sum + 1);
}
//6.
int sum6(int a, int b)
{
	for (int i = a; i <= b - 1; i++)
	{
		printf("%d*", i);
	}
	printf("%d\n", b);
	int sum_6 = 1;
	for (int i = a; i <= b; i++)
	{
		sum_6 *= i;
	}
	printf("total = %d\n", sum_6);
}
//7.
int function7()
{
	int a7, b7;
	char c7;
	printf("두 숫자와 문자(+ * x -)를 입력하세요. : ");
	scanf_s("%d %d %c", &a7, &b7, &c7, 1);
	int sum_7 = 0;
	int sum_77 = 1;
	if (a7 < b7)
	{
		int temp = a7;
		a7 = a7;
		a7 = temp;
	}
	switch (c7)
	{
	case '+':
		for (int i = a7; i <= b7; i++)
		{
			sum_7 += i;
		}
		printf("%d\n", sum_7);
		break;
	case '*':
	case 'x':
		for (int i = a7; i <= b7; i++)
		{
			sum_77 *= i;
		}
		printf("%d\n", sum_77);
		break;
	default:
		printf("예외처리\n");
		break;
	}
}
//8번
int function8(int a8)
{
	int multiple = 1;
	for (int i = 1; i <= a8; i++)
	{
		multiple *= i;
	}
	return multiple;
}
//9번
int function9(int a9)
{
	if (a9 == 1)
	{
		return 1;
	}
	return a9 * function9(a9 - 1);
}
//10번
int function10(int a10)
{
	if (a10 == 0)
		return 0;
	else if (a10 <= 1)
		return 1;
	return function10(a10 - 1) + function10(a10 - 2);
}