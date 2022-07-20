#include<stdio.h>
int main()
{
	//
	int number;
	printf("숫자 입력하세요.");
	scanf_s("%d", &number); //number 변수의 주소에 접근해 값을 꺼내오는 것
	printf("number=%d\n", number);
	//조건문
	if (number > 0)
	{
		printf("number는 양수에요");
	}
	else if (number == 0)
	{
		printf("number는 0이에요");
	}
	else //음수
	{
		printf("number는 음수에요");
	}

	for (int i = 0; i < 10; i++)
		printf("이동준 선생님\n");
	int count = 0;
	while (count < 10)
	{
		printf("count=%d\n", count);
		count++;
	}
	do
	{
		printf("count=%d,count");
	} while (count<10);//1번은 무조건 실행...
	count++;
	return 0;
}