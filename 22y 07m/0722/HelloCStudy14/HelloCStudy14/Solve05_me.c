#include<stdio.h>
struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;


int main()
{
	Rectangle r;
	int area[5] = { 0, };
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �簢���� �ʺ�� ���� �Է� : ", i);
		scanf_s("%d,%d", &r.width, &r.height);
		area[i] = r.width * r.height;
		printf("���� : %d\n", area[i]);
	}
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (area[i] > max)
		{
			area[i] = max;
		}
	}
	printf("���� ū �簢���� ���� : %d\n", max);
	return 0;
}