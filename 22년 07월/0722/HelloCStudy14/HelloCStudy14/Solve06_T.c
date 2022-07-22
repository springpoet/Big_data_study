#include<stdio.h>
#include"Student.h"
int main()
{
//학생 1명의 평균을 구해보자
	Stu s1 = { .math = 40,.kor = 50, .eng = 55 };//선언하자마자 값 부여.
	Stu s2 = { 50,60,55 };//math,eng,kor 이 순서대로 들어감
	int avg = (s1.math + s1.kor + s1.eng) / 3;
	int avg2 = (s2.math + s2.kor + s2.eng) / 3;
	if (avg >= avg2)
		printf("첫 번째 학생의 평균이 더 크다.\n");
	else
		printf("두 번째 학생의 평균이 더 크다.\n");

	//3번
	Stu students[5];
	for (int i = 0; i < 5; i++)
	{
		printf("학생의 국영수 점수 입력하세요. ");
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
	printf("%d번째 학생이 1등이다.\n", num+1);
	return 0;
}