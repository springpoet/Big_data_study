#include<stdio.h>
int main()
{
	//1.���ĺ� A���� Z���� ����ϱ�(�빮��)
	for (char a = 'A'; a < 'Z'; a++)
		printf("%c", a);

	//2. �ҹ��� ����
	for (char a = 'a'; a < 'z'; a++)
		printf("%c", a);
	//3.Aa ������� ����
	for (char a = 'A'; a <= 'z'; a++)
	{
		if (a <= 'Z' || a >= 'a')//�ƽ�Ű�ڵ� �� ��ҹ��� ���� Ư������ ����
			printf("%c", a); 
	}







	return 0;
}