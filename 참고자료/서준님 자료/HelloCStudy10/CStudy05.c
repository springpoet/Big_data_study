#include<stdio.h>

//1번 함수
int Q_1(num11, num22, num33) {  
	printf("a b c : ");

	int sum = 0;
	for (int i = num11; i <= num22; i++) {
		if (i % num33 == 0)
			continue;
		sum += i;
	}
	return sum;
}

//2번
int Q_2() {  
	int sec;
	printf("몇 초? :");
	scanf_s("%d", &sec);
	if (sec > 3600) {
		printf("3600초를 초과했습니다.\n");
	}
	else {
		printf("%d분 %d초\n", sec / 60, sec % 60);
	}
}

//  3번
void color() {		
	system("color 42");
}

//4번
void amuguna(char a, char b) {
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;  // 문자열이라 null을 마지막에 넣음
	system(color);
}

//5번
int Q_5() {
	int sum5 = 0;
	printf("1");
	for (int i = 2; i <= 100; i++) {
		printf("+%d", i);
		sum5 += i;
	}
	printf("\ntotal = %d 이다\n", sum5 + 1);
}

//6번
int Q_6(int facto, int facto2) {
	for (int i = facto; i <= facto2 - 1; i++) {
		printf("%dx", i);
	}
	printf("%d\n", facto2);

	int sum6=1;
	for (int i = facto; i <= facto2; i++) {
		sum6 *= i;
	}
	printf("total = %d\n", sum6);
}

//7번
int Q_7() {
	int num1, num2;
	char sign;
	printf("숫자, 숫자, 문자 입력(+ x X -) : ");
	scanf_s("%d %d %c", &num1, &num2, &sign, 1);

	int sum77 = 0;
	int sum88 = 1;

	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	switch (sign)
	{
	case '+':
		for (int i = num1; i <= num2; i++) {
			sum77 += i;
		}
		printf("%d\n", sum77);
		break;
	case 'x':
	case 'X':
		for (int i = num1; i <= num2; i++) {
			sum88 *= i;
		}
		printf("%d\n", sum88);
		break;
	default:
		printf("예외처리\n");
		break;
	}
}

//8번
int Q_8() {
	printf("1부터 몇까지 곱? : ");
	int factory;
	scanf_s("%d", &factory);

	printf("1x");
	for (int i = 2; i <= factory - 1; i++) {
		printf("%dx", i);
	}
	printf("%d\n", factory);

	int sum8 = 1;
	for (int i = 1; i <= factory; i++) {
		sum8 *= i;
	}
	printf("total = %d\n", sum8);
}

//9번
int Q_9(int factory) {
	if (factory == 1) {
		return 1;
	}
	else {
		return factory * Q_9(factory - 1);
	}
}

//10번 피보나치
int fn(int n) {    
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fn(n - 1) + fn(n - 2);
}


int main() {  // main ///////////////////////////////////

	printf("a b c : ");
	int num11, num22, num33;
	scanf_s("%d %d %d", &num11, &num22, &num33);
	int sum = Q_1(num11, num22, num33); // a b c 값 입력
	printf("%d\n", sum);

	printf("-----------------------------\n");

	//2번
	Q_2();
	printf("-----------------------------\n");

	//3번
	color();
	printf("3번\n");   // color 42 가 바로 실행되어서 문제 4번으로 바로 넘어감
	printf("-----------------------------\n");

	//4번
	printf("문제 4번\n");
	amuguna('f', '5');  // color f5 가 바로 실행되서 문제 5번으로 넘어감
	printf("-----------------------------\n");

	//5번
	Q_5();
	printf("-----------------------------\n");

	//6번
	printf("몇부터? : ");
	int facto;
	scanf_s("%d", &facto);

	printf("몇번째까지? : ");
	int facto2;
	scanf_s("%d", &facto2);

	Q_6(facto, facto2);

	printf("-----------------------------\n");

	//7번
	
	Q_7();
	printf("-----------------------------\n");
	
	//8번
	Q_8();
	printf("-----------------------------\n");

	//9번
	int factory;
	printf("1부터 몇까지 곱? : ");
	scanf_s("%d", &factory);
	int result = Q_9(factory);
	printf("재귀함수 값 : %d\n", result);

	printf("-----------------------------\n");

	//10번 
	printf("피보나치 %d", fn(8));

	return 0;
}