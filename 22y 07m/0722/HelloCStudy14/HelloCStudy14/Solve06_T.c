#include<stdio.h>
#include"Student.h"
int main()
{
//�л� 1���� ����� ���غ���
	Stu s1 = { .math = 40,.kor = 50, .eng = 55 };//�������ڸ��� �� �ο�.
	Stu s2 = { 50,60,55 };//math,eng,kor �� ������� ��
	int avg = (s1.math + s1.kor + s1.eng) / 3;
	int avg2 = (s2.math + s2.kor + s2.eng) / 3;
	if (avg >= avg2)
		printf("ù ��° �л��� ����� �� ũ��.\n");
	else
		printf("�� ��° �л��� ����� �� ũ��.\n");

	//3��
	Stu students[5];
	for (int i = 0; i < 5; i++)
	{
		printf("�л��� ������ ���� �Է��ϼ���. ");
		scanf_s("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);
	}
	Stu Elite = students[0];
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		int average = (students[i].kor + students[i].eng + students[i].math) / 3;
		int max = (Elite.kor + Elite.eng + Elite.math) / 3;
		
		if (max < average)
		{
			Elite = students[i];
			num = i;
		}
	}
	printf("%d��° �л��� 1���̴�.\n", num+1);
	return 0;
}