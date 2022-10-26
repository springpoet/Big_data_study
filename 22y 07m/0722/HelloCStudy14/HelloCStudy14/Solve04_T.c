#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;//struct 생략 가능.

int area(Rectangle r)
{
	return r.width * r.height;
}

int main()
{
	//1. 함수 없는 구조체.
	struct Rectangle r1;
	r1.width = 50;
	r1.height = 10;
	printf("넓이 : %d\n", r1.width * r1.height);

	Rectangle r2;
	scanf_s("%d %d", &r2.width, &r2.height);
	printf("넓이 : %d\n", r2.width * r2.height);
	
	//2.함수 사용한 구조체
	printf("넓이 : %d\n", area(r2));

	//구조체 배열
	Rectangle recs[3];
	recs[0] = r1;
	recs[1] = r2;
	recs[2].width = r1.width;
	recs[2].height = r2.height;


	return 0;
}