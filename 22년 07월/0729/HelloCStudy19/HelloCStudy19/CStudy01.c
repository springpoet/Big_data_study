#include<stdio.h>
struct Game2DPos
{
	int x;
	int y;
};


int main()
{
	struct Game2DPos p1 = { 10,20 };
	struct Game2DPos p2 = { .x = 20,.y = 20 };
	struct Game2DPos p3;
	p3.x = 10;
	p3.y = 20;
	struct Game2DPos p4;
	scanf_s("%d %d", &p4.x, &p4.y);
	printf("�� ��ġ : x��ǥ : %d, y��ǥ : %d\n", p4.x, p4.y);


	return 0;
}