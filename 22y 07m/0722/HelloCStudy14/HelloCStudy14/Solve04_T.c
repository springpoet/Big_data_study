#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;//struct ���� ����.

int area(Rectangle r)
{
	return r.width * r.height;
}

int main()
{
	//1. �Լ� ���� ����ü.
	struct Rectangle r1;
	r1.width = 50;
	r1.height = 10;
	printf("���� : %d\n", r1.width * r1.height);

	Rectangle r2;
	scanf_s("%d %d", &r2.width, &r2.height);
	printf("���� : %d\n", r2.width * r2.height);
	
	//2.�Լ� ����� ����ü
	printf("���� : %d\n", area(r2));

	//����ü �迭
	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width = r1.width;
	recs[2].height = r2.height;


	return 0;
}