#include<stdio.h>
struct Rectangle
{
	int width;
	int height;
};

int square(struct Rectangle r)
{
	int area = r.width * r.height;
	return area;
}

int main()
{
	//�ٷ� �Է�
	struct Rectangle s1;
	s1.width = 50;
	s1.height = 50;
	printf("s1�� �ʺ�� ? %d\n", s1.width*s1.height);

	//��ĵ ���
	struct Rectangle s2;
	scanf_s("%d %d", &s2.width, &s2.height);
	printf("���� : %d\n", s2.width*s2.height);

	//square �Լ� ���
	printf("���� : %d\n", square(s2));
	
	struct Rectangle recs[3];
	recs[0] = s1;
	recs[1] = s2;
	recs[2].width = s1.width;
	recs[2].height = s2.height;
	printf("%d %d\n", recs[2].width, recs[2].height);
	
	//s1�� �ʺ� * s2�� ����
	printf("recs ���� : %d\n", square(recs[2]));
	

	return 0;
}