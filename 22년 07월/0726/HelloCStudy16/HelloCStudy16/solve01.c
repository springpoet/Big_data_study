#include<stdio.h>
void Swap(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
void gugudan()
{
	int num1, num2;
	printf("몇 단 부터 몇 단 까지?");
	scanf_s("%d %d", &num1, &num2);
	int num3, num4;
	printf("어디부터 어디까지 곱??");
	scanf_s("%d %d", &num3, &num4);
	for (int i = num1; i <= num2; i++)
	{
		for (int j = num3; j <= num4; j++)
		{
			printf("%2d * %2d=%2d", i, j, i * j);
			
		}
	}
}
int main()
{
	int a, b, c;
	int a2, b2, c2;
	printf("숫자 세개 입력 ");
	scanf_s("%d %d %d", &a, &b, &c);
	a2 = a;
	b2 = b;
	c2 = c;
	printf("전 : %d %d %d\n", a, b, c);
	//1. while문을 쓸 경우 초기 a,b,c와 a2,b2,c3의 값이 같기 때문에
	//2. 우선 1번 실행하는 do while 문 사용
	printf("%d %d %d\n", a, b, c);
	do
	{
		Swap(&a, &b, &c);
		printf("a=%d, b=%d,c=%d\n", a, b, c);
	} while (a2!=a && b2!=b && c2!=c);



	/*for (int i = 0; i < 3; i++)
	{
		if (Swap(&a, &b, &c)==(a,b,c))
			break;

	}
	*/
	gugudan();

}