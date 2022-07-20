#include<stdio.h>
int main()
{
	//반복문에 대해서 계속 해보자
	//break, continue 키워드
	//while, do-while에 대해서 더 해보자

	//break : 모든 반복문에서 쓰임. 즉시 종료됨
	//continue : 다음 단계로 스킵함
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue;//i가 13579일때 continue 만나면 i++로 바로 넘어감
		printf("숫자:%d\n", i);// 시간 초과하면 다음 문제로 넘어가는 프로그램(idea)
	}
	//while:~하는 동안
	// 괄호 안의 값이 참이면 계속 실행
	int count = 0;
	while (count < 10)
	{
		count++;
		printf("count=%d\n", count);
	}
	while (1)
	{
		if (count > 100)
			break;
		count += 10;
		printf("count=%d\n", count);
	}
	do
	{
		//while 안의 조건이 거짓이라도 꼭 1번은 실행
		//while 문의 괄호 (while())안의 조건이 거짓이면 1번도 실행하지 않음
		printf("1번은 실행함!!");
	} while (count<100);
	//진도 참고 : 포인터-배열-문자열-함수-구조체-연결리스트, 스택, 큐, 알고리즘(버블 선택 퀵)
	//연결리스트부터는 자료구조, 알고리즘 내용이라 심화된 내용
	return 0;
}