#include<stdio.h>
//1.
int sum_a_to_b(int a, int b, int c)
{
	int sum = 0;

	for (int i = a; i <= b; i++)
	{
		if (i % c != 0)//c�� ��� ����
			sum += i;
	}
	return sum;
}

//2.
int time(int sec)
{
	if (sec > 3600)
	{
		printf("���� �޼���\n");
		return -1;
	}

	printf("%d�� %d��\n", sec / 60, sec % 60);

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
	printf("�� ���ڿ� ����(+ * x -)�� �Է��ϼ���. : ");
	scanf_s("%d,%d,%c", &a7, &b7, &c7, 1);
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
		printf("����ó��\n");
		break;
	}
}
//8��
int function8()
{
	printf("1���� ����� ��?: ");
	int a8;
	scanf_s("%d", &a8);
	int sum8 = 1;
	for (int i = 1; i <= a8 ; i++)
	{
		sum8 *= i;
	}
	printf("total : %d\n", sum8);
}
//9��
int function9(int a9)
{
	if (a9 == 1)
		return 1;
	return a9 * function9(a9 - 1);
}
//10��
int function10(int a10)
{
	if (a10 == 0)
		return 0;
	else if (a10 <= 1)
		return 1;
	return function10(a10 - 1) + function10(a10 - 2);
}
///////���� �Լ�
int main()
{
	//1��.
	printf("1��\n");
	int x, y, z;
	printf("a,b,c���� �Է��ϼ���.");
	scanf_s("%d,%d,%d", &x, &y, &z);
	printf("%d���� %d������ ��(%d ��� ����)\n", x, y, z);
	int result = sum_a_to_b(x, y, z);
	printf("��� : %d\n", result);

	//2��.
	printf("2��\n");

	int sec;
	printf("�ʸ� �Է��ϼ���. ");
	scanf_s("%d", &sec);
	time(sec);
	int result2 = time(sec);
	printf("result = %d\n", result2);

	//3��.
	printf("3��\n");
	color();

	//4��.
	printf("4��\n");
	//color2('a', '0');
	rewind(stdin);
	printf("ù���繮���Է�\n");
	char a = getchar();
	rewind(stdin);
	printf("�ι�°�����Է�\n");
	char b = getchar();
	color2(a, b);

	//5��.
	printf("5��\n");
	sum5();

	//6��.
	printf("6��\n");
	printf("����� ����� ���ұ��?");
	int a6, b6;
	scanf_s("%d,%d", &a6, &b6);
	sum6(a6, b6);

	//7��.
	printf("7��\n");
	function7();


	//8.
	printf("8��\n");
	function8();

	//9.
	printf("9��\n");
	int a9;
	printf("1���� ������� ��? : ");
	scanf_s("%d", &a9);
	printf("%d\n",function9(a9));

	//10
	printf("10��\n");
	int a10;
	printf("�Ǻ���ġ ���� ���°���� ���? ");
	scanf_s("%d\n", &a10);
	for (int i = 1; i < a10; i++)
	{
		printf("%d��° ��", i);
		printf("%d\n", function10(i));
	}

	return 0;


}
