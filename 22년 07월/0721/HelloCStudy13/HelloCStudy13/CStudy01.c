#include<stdio.h>
//함수:코드 뭉치
//미리 만들어 둔 코드 덩어리


//함수의 4가지 형태
//반환형(o), 매개변수(parameter, o)
//반환형(o), 매개변수(parameter, x)
//반환형(x), 매개변수(parameter, o)
//반환형(x), 매개변수(parameter, x)
void enterKey()
{
	printf("\n");
}

void printPowerNumber(int n)
{
	printf("%d", n * n);
}

int inputNum()//숫자를 입력받음
{
	int n;
	printf("숫자 입력해요\n");
	scanf_s("%d", &n);
	return n;
}
//반환형, 매개변수 둘 다 있는 것
int powerNum(int n, int p)//n:숫자,p:제곱 수
{
	if (p <= 0)//음수 제곱은 하지 말자
		return 1;
	else if (p == 1)
		return n;
	else
	{
		int num = n;
	for (int i = 0; i < p-1; i++)
		n *= num;
	}
	return n;
}

//2번.
void printNumber(int n)
{
	printf("%d", n);

}
int main()
{
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("숫자 2개 대해서 입력받고 출력해봄\n");
	
	//1.호출해보기
	enterKey();//한줄띄우기
	printPowerNumber(3); //3의 제곱 출력
	enterKey();
	int mynum= inputNum();
	powerNum(mynum, 3);//mynum의 세제곱
	int result = powerNum(mynum, 3);//결과 값 출력 변수
	printf("%d", result);//결과 값 출력
	enterKey();
	printNumber(30);
	enterKey();
	//3.
	printNumber(powerNum(inputNum(),2));//powerNum=입력한 숫자의 p제곱)
	enterKey();

	//4.
	num = inputNum();
	int power = inputNum();
	printNumber(powerNum(num, power));


	//enterKey();
	//powerNum(num, num);
	//enterKey();
	//printNumber(powerNum(3,4));
	//enterKey();
	//enterKey();
	//printNumber(powerNum(inputNum(), inputNum()));
	

	return 0;
}