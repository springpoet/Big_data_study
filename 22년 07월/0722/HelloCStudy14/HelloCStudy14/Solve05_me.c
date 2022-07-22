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
		printf("%d번째 사각형의 너비와 높이 입력 : ", i);
		scanf_s("%d,%d", &r.width, &r.height);
		area[i] = r.width * r.height;
		printf("넓이 : %d\n", area[i]);
	}
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (area[i] > max)
		{
			area[i] = max;
		}
	}
	printf("가장 큰 사각형의 넓이 : %d\n", max);
	return 0;
}