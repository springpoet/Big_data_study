#include<stdio.h>

struct Rectangle 
{
	int width;
	int height;
}typedef Rectangle;

int main()
{
	//���� ������
	Rectangle recs[5];
	for (int i = 0; i < 5; i++)
	{
		printf("�簢���� �ʺ�� ���� �Է�");
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
	}
	Rectangle max = recs[0]; //�Է¹��� recs�迭�� ù��°�� �ִ�� ����
	for (int i = 0; i < 5; i++)
	{
		int area = recs[i].width * recs[i].height;//�� �簢���� ����
		int maxArea = max.width * max.height;//�簢���� ���̵� �� ���� ū ��
		if (maxArea < area)//�迭 �� �� ���� ū �� ã�� if
		{
			max = recs[i];//���� ū �� ã�� ����
		}
	}
	printf("���� ���� �簢���� �ʺ� : %d �� ���� : %d", max.width, max.height);

	//
	return 0;
}