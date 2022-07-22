#include<stdio.h>

struct Rectangle 
{
	int width;
	int height;
}typedef Rectangle;

int main()
{
	//예외 제외함
	Rectangle recs[5];
	for (int i = 0; i < 5; i++)
	{
		printf("사각형의 너비와 높이 입력");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle max = recs[0]; //입력받은 recs배열의 첫번째를 최대로 가정
	for (int i = 0; i < 5; i++)
	{
		int area = recs[i].width * recs[i].height;//각 사각형의 넓이
		int maxArea = max.width * max.height;//사각형의 넓이들 중 가장 큰 값
		if (maxArea < area)//배열 비교 중 가장 큰 값 찾는 if
		{
			max = recs[i];//가장 큰 값 찾는 라인
		}
	}
	printf("가장 넓은 사각형의 너비 : %d 와 높이 : %d", max.width, max.height);

	//
	return 0;
}