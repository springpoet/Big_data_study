#include <stdio.h>
void printMySelf()  //선언
{
	printf("안녕하세요\n");
	printf("안서준입니다\n");
	printf("반갑습니다\n");
	printf("저는 프로그래밍 학생입니다\n");

}
int MathPower(int num) { // 제곱은 제곱인데, 0이나 음수면 그냥 0 반환  //매개변수, 반환값 있을 때
	if (num <= 0)		 // 선언
		return 0;

	return num * num;
}
char calcul() {  //반환형은 있는데 매개변수가 없을때

	printf("첫 번째 숫자 입력 : ");
	int num1;
	scanf_s("%d", &num1);

	printf("두 번째 숫자 입력 : ");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0) {
		return '-';
	}
	else if (result == 0) {
		return 0;
	}
	else
		return '+';
}
void calcul_sign(int num1, int num2) {  //반환값 없고 매개변수만 있을 때
	int result = num2 - num1;
	if (result < 0) {
		printf("기호는 0 입니다.\n");
	}
	else if (result == 0) {
		printf("기호는 0 입니다.\n");
	}
	else
		printf("기호는 + 입니다.\n");
}

int main() {  // Main /////////////////////////////////////////////////////

	printMySelf(); //호출
	printf("------------------------\n");

	int result = MathPower(5);
	printf("5의 제곱은 %d입니다.\n", result);
	printf("3의 제곱은 %d입니다.\n", MathPower(3));
	result = MathPower(-7);
	printf("result - %d \n", result);

	printf("------------------------\n");

	char giho = calcul();
	printf("기호는 %c입니다\n", giho);

	printf("------------------------\n");
	
	int n1, n2;
	printf("첫번째수? : ");
	scanf_s("%d", &n1);

	printf("두번째수? : ");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2); //n1, n2받아서 계산 후 출력
	// calcul_sign(30, 30); 만 해도 됨

	printf("------------------------\n");


	return 0;
}