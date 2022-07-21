#include<stdio.h>
#include<stdlib.h>
int main()
{
	//4.
	//2번에서 x,b를 선언 받았기 때문에 a만 초기화 후 선언
	int x, b;
	printf("x와 b는?\n");
	scanf_s("%d %d", &x, &b);

	int a;
	printf("a는?");
	scanf_s("%d", &a);

	//(x+a)(x+b)=x^2+(a+b)+(a*b)
	printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a)* (x + b));
	printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));

	/*5-1 %, / 사용
	1)10으로 나눈 나머지=1의자리
	2)10으로 나눈 후 나머지 값 구하기
	3)100으로 나눈 몫*/
	printf("첫번째와 두번째 숫자를 입력하세요.");
	int num1, num2;
	scanf_s("%d,%d", &num1, &num2);
	//scanf_s에서 띄어쓰기를 이용해서 여러개 입력 가능하지만, 콤마를 이용해도 된다.

	printf("1.%d\n", num1 * (num2 % 10));//472&5
	printf("2.%d\n", num1 * ((num2 / 10) % 10));//472&8
	printf("3.%d\n", num1 * (num2 / 100));//472*3
	printf("4.%d\n", num1 * num2);

	//5-2 아스키코드 이용
	printf("두번째 숫자만 다시 입력해봐요.");
	char number[4];//[4]이상으로 아무거나 가능
	rewind(stdin);
	gets(number);//385를 숫자가 아니라 문자 3, 8, 5를 입력한것
	
	printf("%d\n"), number[0]);
	printf("%d\n"), number[0]);


	printf("1.%d\n2.%d\n3.%d\n4.%d\n", 
		num1*(number[2]-'0'),
		num1*(number[1]-'0'),
		num1*(number[0]-'0'),
		num1* atoi(number));
	//atoi 입력이 안될시 헤더에 #include<stdlib.h> 추가
	//f5로 디버깅 실행
	return 0;
}