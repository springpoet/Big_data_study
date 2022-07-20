#include<stdio.h>
int main()
{
	//int main():f()=0
	//scanf와 printf 도 함수.
	
	//c : 함수: function -기능, C#, Jave:메소드 method - 기능
	/*반환형과 매개변수가 없는 함수
		void printfMySelf()
	{
		printf("Hello");
	}*/
	int result = printf("Hello");
	printf("%\n%d\n", result);
	//printf는 Byte값 출력하는 함수	
	int n, m;
	int a = scanf_s("%d", &n);
	//scanf는 값 입력받는 기능.(매개 변수들 입력, 입력받을 변수의 개수 반환)
	int b = scanf_s("%d %d", &n, &m);
	result = printf("%d %d", n, m);
	printf("\nresult=%d, a=%d, b=%d\n", result,a,b);
	
	return 0;
}