#include<stdio.h>
#include"Mystructures.h"
int main()
{
	KBStudent students[5];
	int cSum = 0;
	int javaSum = 0;
	int maxC = 0;
	int maxJava = 0;
	double avg_max = 0;
	double avg_min = 0;
	int index_max = 0;//1���� �ε���
	int index_max_C = 0;
	int index_max_Java = 0;
	for (int i = 0; i < 5; i++)
	{
		rewind(stdin);
		printf("�̸��� ������?");
		gets(students[i].name);
		printf("c, java ������? ");
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
	}
	for (int i = 0; i < 5; i++)
	{
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("c, java ������ �� �� : %d %d\n", cSum, javaSum);
	printf("c, java ������ ��� : %f %f\n", cSum / 5.0, javaSum / 5.0);
	maxC = students[0].cScore;
	maxJava = students[0].javaScore;
	avg_max = (students[0].cScore + students[0].javaScore) / 2.0;	

	for (int i = 0; i < 5; i++)
	{
		if (maxC < students[i].cScore)
		{
			maxC = students[i].cScore;
			index_max_C = i;
		}
		if (maxJava < students[i].javaScore)
		{
			maxJava < students[i].javaScore;
			index_max_Java = i;
		}
		if (avg_max < (students[i].cScore + students[i].javaScore) / 2.0)
		{
			avg_max = (students[i].cScore + students[i].javaScore) / 2.0;
				index_max = i;
		}
	}
	printf("C 1�� : %s\n", students[index_max_C].name);
	printf("Java 1�� : %s\n", students[index_max_Java].name);
	printf("��� 1�� : %s\n", students[index_max].name);



	return 0;
}