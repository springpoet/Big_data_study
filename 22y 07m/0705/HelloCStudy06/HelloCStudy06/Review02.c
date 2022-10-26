#include<stdio.h>
int main()
{
	int age;
	scanf_s("%d", &age);
	printf("몇살이니?");
	if (age < 0)
	{
		printf("음수\n");
	}
	else
	{
		age /= 10;
		switch (age)
		{
		case 0:
			printf("응애응애\n");
			break;
		case 1:
			printf("청춘\n");
			break;
		case 2:
			printf("일잘러\n");
			break;
		case 3:
			printf("관리자\n");
			break;
		default:
			printf("멋쟁이");
			break;
		}

	}
	//2.
	printf("학점 입력");
	int score;
	double score;
	scanf_s("%lf", &score);
	if (score < 0)
		printf("퇴학");
	else if (score < 1.0)
		printf("F");
	else if (score < 2.0)
		printf("D");
	else if (score < 3.0)
		printf("C");
	else if (score < 4.0)
		printf("B");
	else if (score < 4.5)
		printf("A");
	else if (score == 4.5)
		printf("A+");
	else
		printf("교수");








	return 0;
}