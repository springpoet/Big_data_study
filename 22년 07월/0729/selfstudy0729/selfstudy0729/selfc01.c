#include<stdio.h>
#define enter printf("\n")
struct KBStudent
{
	int cScore;
	int javaScore;
	char name[100];
}typedef KBStudent;


int main()
{
	KBStudent students[5];
	int cSum = 0;
	int javaSum = 0;
	double c_avg = 0;
	double java_avg = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� �л��� �̸���? : ", i + 1);
		rewind(stdin);
		gets(students[i].name);
		printf("%d�� �л��� c ����, java ���� �Է� : ", i + 1);
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s�� c ���� : %d, java ���� : %d\n", students[i].name, students[i].cScore, students[i].javaScore);
	}
	enter;
	printf("c ������ �� : %d\n", cSum);
	printf("java ������ �� : %d\n", javaSum);
	enter;
	printf("c ������ ��� : %.2f\n", cSum / 5.0);
	printf("java ������ ��� : %.2f\n", javaSum / 5.0);
	enter;
	int cMax = students[0].cScore;
	int javaMax = students[0].javaScore;
	int cIndex = 0;
	int javaIndex = 0;
	for (int i = 0; i < 5; i++)
	{
		if (cMax < students[i].cScore)
		{
			cMax = students[i].cScore;
			cIndex = i;
		}
		if (javaMax < students[i].cScore)
		{
			javaMax = students[i].javaScore;
			javaIndex = i;
		}
	}

	return 0;
}