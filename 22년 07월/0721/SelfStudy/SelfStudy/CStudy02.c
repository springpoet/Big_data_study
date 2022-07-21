#include<stdio.h>

int a;
int b;

int bigNum(int a, int b);
int bigbigNum(int a, int b);
void switching();
int switchPointer();



int main()
{
	//1.
	int num1, num2;
	printf("두 숫자를 입력하세요 ");
	scanf_s("%d,%d",&num1,&num2);
	bigNum(num1, num2);

	//2.
	int num3, num4;
	printf("두 숫자를 입력하세요 ");
	scanf_s("%d,%d", &num3, &num4);
	bigbigNum(num3, num4);
	int result = bigbigNum(num3, num4);
	printf("%d\n",bigbigNum(num3,num4));

	//3.
	//전역변수 a,b를 설정했기 때문에 int 쓸 필요 없음
	printf("숫자 두 개 입력");
	scanf_s("%d,%d", &a, &b);
	printf("전 : %d, %d\n", a, b);
	switching();
	printf("후 : %d, %d\n", a, b);

	int num5, num6;
	printf("바꿀 두 수 입력 ");
	scanf_s("%d,%d", &num5, &num6);
	switchPointer(&num5, &num6); //주소지 보내기
	printf("결과 : %d, %d", num5, num6); 


	return 0;
}

int bigNum(int a, int b)
{
	if (a < b)
	{
		printf("%d\n",b);
		return;
	}
	printf("%d\n",a);
}
int bigbigNum(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

//3번 함수
void switching()
{
	int temp = a;
	a = b;
	b = temp;
}
//3번 포인터
int switchPointer(int* a, int* b) //넘긴 주소지 받기, a, b의 주소지
{
	int temp = *a; //주소지에 해당하는 값 a, b의 값
		*a = *b;
		*b = temp;
}