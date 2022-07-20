#include<stdio.h>
//1.반환값 매개변서 둘 다 없는 함수
void printMySelf()//함수 선언
{
	printf("안녕하세요.\n");
	printf("김성근입니다.\n");
	printf("반갑습니다.\n");
	printf("저는 프로그래밍 학생입니다.\n");
}
//2.매개변수(parameter)와 반환값(return)이 둘 다 있는 함수
//0이나 음수면 0반환하고 아닐 경우 제곱 실행

int MathPower(int num)//함수 선언
{
	if (num <= 0)
		return 0;

	return num * num;
}
//3.반환형은 있으나 매개변수가 없는 함수
char calcul()//두 개의 숫자를 함수 안에서 입력받고, 그것에 대한 연산 결과에 따라 - 0 +글자 반호나함
{
	printf("첫 번째 숫자 입력해보세요");
	int num1;
	scanf_s("%d", &num1);
	printf("두 번째 숫자 입력해보세요");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0)
		return '-';
	else if (result == 0)
		return '0';
	else
		return '+';

	return 0;
}
//4.매개변수는 있으나 반환값이 없는 함수(3번 이용해서 만들기)
void calcul_sign(int num1, int num2)
{
	int result = num2 - num1;
	if (result < 0)
		printf("기호는 -입니다.\n");
	else if (result == 0)
		printf("기호는 0입니다.\n");
	else
		printf("기호는 +입니다.\n");
}
int main()
{
	printMySelf();//호출!!(출력이 역할이기 때문에 printf필요x)
	int result = MathPower(5);//호출!!(값을 알아내는게 역할이기때문에 print필요o)
	printf("5의 제곱은 %d입니다.\n", result);
	printf("3의 제곱은 %d입니다.\n", MathPower(3));
	result = MathPower(-7);
	printf("result=%d\n", result);

	char sign = calcul();
	printf("부호는 %c입니다.\n", sign);

	int n1, n2;//입력을 main에서 해주고 있다.
	printf("첫번째 수?");
	scanf_s("%d", &n1);
	printf("두번째 수?");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2);//n1, n2 받아서 계산해서 출력해줌
	//calcul_sign(30,30)이런식으로 값을 바로 입력 해도 됨

	//함수의 이름과 매개변수의 변수 이름을 잘 적어야 함.



	return 0;
}
