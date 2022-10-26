#include<stdio.h>
int main()
{
	int age;
	printf("나이를 입력하세요. ");
	scanf_s("%d", &age);
	if (age < 0)
		printf("나이가 음수입니다.");
	//else if (age < 10)   if, else 사용할때는 위 age/=10; 할필요없음
	//	printf("응애응애\n");
	//else if (age < 20)
	//	printf("급식먹는 친구들\n");
	//else if (age < 30)
	//	printf("청춘\n");
	//else if (age < 40)
	//	printf("일잘러\n");
	//else if (age < 50)
	//	printf("관리자\n");
	//else
	//	printf("멋쟁이\n");
	else
		age /= 10;
	switch (age)
	{
	case 0:
		printf("응애응애\n");
		break;
	case 1:
		printf("급식먹는 친구들\n");
		break;
	case 2:
		printf("청춘\n");
		break;
	case 3:
		printf("일잘러\n");
		break;
	case 4:
		printf("관리자\n");
		break;
	case 5:
		printf("멋쟁이\n");
		break;
	default:
		break;
	}
	//2.
	int score;
	printf("학점 몇이니?");
	scanf_s("%d", &score);
	if (score < 0)
		printf("퇴학\n");
	else
		score = (score * 10) / 5;
	switch (score)
	{
	case 0:
	case 1:
		printf("F\n");
		break;
	case 2:
	case 3:
		printf("D\n");
		break;
	case 4:
	case 5:
		printf("C\n");
		break;
	case 6:
	case 7:
		printf("B\n");
		break;
	case 8:
	case 9:
		printf("A\n");
		break;
	case 10:
		printf("A+\n");
		break;

	default:
		printf("교수\n");
		break;
	}

	return 0;
}