#include<stdio.h>
int test1()
{
	printf("test1\n");
	return 0;
}

int test2()
{
	printf("test2\n");
	return 1;
}

int test3()
{
	printf("test3\n");
	return 2;
}
int main()
{
	if (test1())
	{
		printf("���� ��� �ȵ�");
	}
	if (test1() && test2())
	{
		printf("�̰� ��� �ɱ�?");
	}

	int result1 = test1();
	int result2 = test2();
	int result3 = test3();
	if (result1 || result2 || result3)
	{
		printf("����� �Լ� �����ϰ� �˻縦 �Ѵ�.");
	}
	return 0;
}