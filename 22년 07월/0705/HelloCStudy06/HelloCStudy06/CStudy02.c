#include<stdio.h>
int main()
{
	int a = 10;
	int* ptr_a = &a;
	*ptr_a = 11;
	printf("%d\n", *ptr_a);//변수 a의 값이 바뀜
	printf("%d\n", a);//변수 a에 저장된 것
	
	//scanf와 같은 '함수'에서 쓰임
	//대용량의 데이터를 가리킬 때 사용
	//만약에 하나의 변수를 이용해 10이상의 정수를 가르키고 싶다.
	int numbers[10];
	//기존의 변수와는 다르게 numbers에는 10개의 변수를 저장할 수 있다.
	for (int i = 1; i <= 10; i++)
		numbers[i - 1] = i;
	for (int i = 0; i < 10; i++)
		printf("%d\n", numbers[i]);


	int* ptr = numbers;
	for (int i = 0; i < 10; i++)
		ptr[i] = i * 10;
	for (int i = 0; i < 10; i++)
		printf("%d", numbers[i]);
	return 0;

}