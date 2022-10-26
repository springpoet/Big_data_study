#include<stdio.h>
#include"Mystructures.h"

int main()
{
	KBStudent s1 = { .cScore = 100,.javaScore = 0,.name = "김성근" };
	KBStudent s2;
	printf("이름은? ");
	gets(s2.name);
	printf("c 점수는 ?");
	scanf_s("%d", &s2.cScore);
	printf("java 점수는? ");
	scanf_s("%d", &s2.javaScore);
	printf("%s의 c 점수 : %d, java 점수 : %d\n", s2.name, s2.cScore, s2.javaScore);

	//3번
	KBStudent s3[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 c 점수, java 점수, 이름 순으로 입력 : ",i+1);
		scanf_s("%d %d", &s3[i].cScore, &s3[i].javaScore);
		gets(s3[i].name);
	}
		rewind(stdin);
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생의 이름은 %s이며 c 점수는 %d점이고 java 점수는 %d입니다.\n",
			i + 1, s3[i].name, s3[i].cScore, s3[i].javaScore);
	}
	
	//4번.
	int c_sum = 0;
	int java_sum = 0;
	for (int i = 0; i < 5; i++)
	{
		c_sum += s3[i].cScore;
		java_sum += s3[i].javaScore;
	}
	printf("c점수의 합 : %d, java점수의 합 : %d", c_sum, java_sum);

	//5번.

	return 0;
}