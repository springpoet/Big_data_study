#include<stdio.h>
//변수의 종류
//전역변수(global 변수)
//지역변수(중괄호 안에 있는 변수, 매개변수)
//정적변수(정적변수 안에도 전역, 지역변수가 있다)
//전역변수는 함수 바깥에 선언한다.
int g = 0;
static int s1 = 0;//정적 변수는 static 키워드가 붙음

void upNum(int a, int b)//a,b는 매개변수
						//매개변수=지역변수(함수가 끝나면 사라짐)
{
	static int s2 = 0;//static이 붙은 건 어떨까
	a++;
	b++;
	g++;
	s2++;
	printf("%d,%d,%d,%d\n", a, b, g, s2);
}



int main()
{
	//지역변수는 함수나 중괄호 안에 선언함
	int num = 10;
	if (num > 0)
	{
		int n = 100;//변수 n은 num이 양수여야 존재.
		upNum(num, n);
		upNum(num, n);
		upNum(num, n);
		printf("n=%d,num%d\n", n, num);
	}
	g++;//전역함수는 함수 어디에서나 사용 가능
	printf("g=%d", g);
	//upNum(num,n); //변수n은 if 문 안에서만 작동함
	return 0;
}