#include<stdio.h>

void increaseNum(int* numbers, int n)
{
	for (int i = 0; i < n; i++)
		numbers[i] += n;

} 

int main()
{
	//�������ڸ��� �Է�
	int ages[5] = { 23,25,30,29,50 };
	int ages2[3] = { 10,20,30 };

	//�����ϰ��� �� �ֱ�
	int ages3[3];
	ages3[0] = 10;
	ages3[1] = 20;
	ages[2] = 30;


	return 0;
}