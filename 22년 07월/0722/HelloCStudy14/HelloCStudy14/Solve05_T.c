#include<stdio.h>

struct Rectangle
{
	int width;
	int height;
}typedef Rectangle;

int main()
{
	Rectangle recs[5];
	for (int i = 0; i < 5; i++)
	{
		printf("사각형의 너비와 높이 입력 ");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle maxRec = recs[0];
	for (int i = 0; i < 5; i++)
	{
		//2번. 음수 예외 처리, 둘 중 하나라도 음수면 패스.
		if (recs[i].width < 0 || recs[i].height < 0)
			continue;

		int area = recs[i].width * recs[i].height;
		int maxRecArea = maxRec.width * maxRec.height;
		if (maxRecArea < area)
		{
			maxRec = recs[i];
		}
	}
	//2번에 대한 예외 처리.
	if (maxRec.width >= 0 && maxRec.height >= 0)
	{
		printf("가장 넓은 사각형의 width : %d, height : %d", maxRec.width, maxRec.height);
	}

	return 0;
}