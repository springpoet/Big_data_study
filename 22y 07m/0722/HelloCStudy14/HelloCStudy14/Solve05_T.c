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
		printf("�簢���� �ʺ�� ���� �Է� ");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle maxRec = recs[0];
	for (int i = 0; i < 5; i++)
	{
		//2��. ���� ���� ó��, �� �� �ϳ��� ������ �н�.
		if (recs[i].width < 0 || recs[i].height < 0)
			continue;

		int area = recs[i].width * recs[i].height;
		int maxRecArea = maxRec.width * maxRec.height;
		if (maxRecArea < area)
		{
			maxRec = recs[i];
		}
	}
	//2���� ���� ���� ó��.
	if (maxRec.width >= 0 && maxRec.height >= 0)
	{
		printf("���� ���� �簢���� width : %d, height : %d", maxRec.width, maxRec.height);
	}

	return 0;
}