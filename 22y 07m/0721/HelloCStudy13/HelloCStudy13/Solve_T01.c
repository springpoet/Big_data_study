#include<stdio.h>

//1번
void findBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
		return; //return 타입이 void면 a를 도출 한 후 종료.
				//void 인 경우 return을 안 적어도 됨.
	}
	printf("%d\n", b);
}

//2번
int findBigReturn(int a, int b)
{
	if (a >= b)
		return a;//else 안 적어도 됨.
	return b;
}


int main()
{
	//main에서 해보기
	//1번
	int a, b;
	printf("숫자 두 개 입력하세요. ");
	scanf_s("%d,%d", &a, &b);
	//삼항연산자
	a >= b ? printf("%d\n", a) : printf("%d\n", b);

	//삼항연산자 없이 풀이
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	//함수 사용
	findBig(a, b);

	//return 사용
	int result = findBigReturn(a, b);
	printf("%d\n", result);


	return 0;
}