#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_num(int n)//랜덤번호 생성 함수

void getISOTime(char* buffer, size_t bufferSize);

int main()
{
	int n = 1;
	char buf[80];

	while (n != 0) 
	{
	//현재 시간/날짜 출력
		getISOTime(buf, sizeof(buf));
		printf("%s\n", buf);
	
		printf("몇 줄 생성할까요?");
		scanf_s("%d", &n);
		rand_num(n);
	}






	return 0;
}