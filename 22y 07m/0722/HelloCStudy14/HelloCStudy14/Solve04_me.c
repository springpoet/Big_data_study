#include<stdio.h>
struct Rectangle
{
	int width;
	int height;
};

int square(int width, int height)
{
	int area = width * height;
	printf("���� : %d\n", area);
	return area;
}
int main()
{
	struct Rectangle s1;
	s1.width=50;
	s1.height=50;
	square(s1.width, s1.height);
	struct Rectangle s2;
	printf("�ʺ�� ���̸� �������� : ");
	scanf_s("%d %d", &s2.width, &s2.height);
	square(s2.width, s2.height);

	return 0;
}