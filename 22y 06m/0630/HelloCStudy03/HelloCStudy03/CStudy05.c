#include<stdio.h>
int main()
{
	if (0) // 절대 실행 안함 
		//실행 안할 문구: if(0)후 중괄호 안에 집어넣기.
	{
		//1. 
		int x, y;
		printf("숫자 두 개 입력하세요\n");
		scanf_s("%d,%d", &x, &y);

		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y > 0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else if (x > 0 && y < 0)
			printf("4\n");
		else
			printf("0\n");
	}
	//숫자로 시작하면 안되거나 간헐적으로 안되는 버그가 있음
	if (0)
	{
		//2.#region tab tab하면 이름 지정 후 묶음 처리 가능
		int age;
		printf("나이 입력하세요\n");
		scanf_s("%d", &age);
		if (age < 0 || age>200) //예외를 먼저 선언
			printf("타노스");
		else
		{
			if (age < 20) //예외를 먼저 선언했기 때문에 age는 0이상이라는게 전제 됨
				printf("미성년자\n");
			else if (age >= 20 && age < 50)//age<50으로만 적어도 된다. 위의 if구문에서 필터되기때문
				printf("사회의 주 구성원\n");
			else if (age > 50 && age < 70)
				printf("관리자\n");
			else if (age > 70) //else로 끝내도 됨 else는 뒤에 조건을 안 붙여도 됨.
				printf("지혜의 도서관\n");
			//else if로 끝내도 된다. 억지로 else 안 써도 됨
		}

	}

	
	//3.
	//5, 6 9 : 9시 45분에 일어나야하면 -45하면 9시지만, 
	//9시에 일어나야할때 0분->-45가되기 때문에 +60을 하고, 시간을 1 빼준다. 
	
	int h, m;
	여기:
	printf("시간 입력하기\n");
	scanf_s("%d", &h);
	if (h >= 24)
	{
		printf("\n값이 너무 크니까 다시 입력하세요.\n");
		goto 여기;//goto는 되도록 쓰지말자.
	}
	h = h % 24;//= h%=24;
	printf("분 입력하기\n");
	//int m;<-위에 int h,m에서 m을 지정해줬기 때문에 없애야함
	scanf_s("%d", &m);
	m = m % 60;//= m%=60;
	printf("45분 전 시간을 세팅해드리겠습니다.\n");
	m = m - 45;//m-=45
	if (m < 0)	
	{
		m += 60;//m=m+60;
		h -= 1;
		if (h < 0)
			h += 24;
	}
	printf("알람 시간:%d시 %d분\n", h, m);

	return 0;

}