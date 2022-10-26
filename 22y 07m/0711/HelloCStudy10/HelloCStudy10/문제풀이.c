#include<stdio.h>
int time(int a)
{
	if (a > 3600)
		printf("오류메세지");
	else
		printf("%d분 %d초", a / 60, a % 60);
	int m = a / 60;
	return m;
}
int main()
{
	if (0)
	{


		//1.
		int a, b, c;
		printf("a,b,c의 값을 입력하세요.");
		scanf_s("%d,%d,%d", &a, &b, &c);

		int sum = 0;
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
				continue;
			sum += a + 1;
		}
		printf("sum=%d\n", sum);

	}
	//2.
	printf("몇 초인가요?");
	scanf_s("%d", &a);
	time(a);
	min = a / 60;
	sec = a % 60;
}

//3.
#include<stdio.h>
#include<stdlib.h>


int main()
{

	system("color 0a");

	printf("hello world");

}



#include<stdio.h>

//5.
int sum(int n)
{
	if (n == 100)
		return 100;
	return n + sum(n + 1);
}
int main()
{
	printf("%d\n", sum(1));
	return 0;
}
//6. 
int i=0;
for(i = a; i <= b; i++)
{

}