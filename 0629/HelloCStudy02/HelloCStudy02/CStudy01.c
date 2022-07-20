#include<stdio.h>
int main()
{
	int age = 28;//제일 많이 씀
	long bigValue = 9999999999;
	short smallValue = 5;//실수
	double pi_value = 3.1415;//많이 씀
	float myPi = 3.14; //8Byte

	char MyInitial = 'K';
	//999999999를 int값에 넣을 시 overflow 발생.
	int nowYear = 2022;
	printf("내가 태어난 연도는 %d입니다.\n", nowYear + 1 - age);
	printf("원주율 값은 %f입니다.\n", pi_value);
	return 0;

	//변수를 통해서 값을 입력 받아보자.
	//내가 입력한 숫자의 제곱값을 구해보자.

	int input;
	printf("숫자를 입력해주세요.");
	scanf_s("%d", &input);
	printf("그 숫자의 제곱은 %d입니다.\n", input * input);
	int result = input * input;
	printf("답:%d\n", result);

	//1.int age 라는 변수를 선언
	//2.이 변수에 나의 나이를 입력한다.
	//3.내 나이는 age살입니다. 출력
	//age 변수를 이용해서 내가 태어난 연도를 확인해보기.(한국식 나이를 기준으로 한다.)
	int age;
	int nowYear = 2022;
	printf("나이를 입력하세요.");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);
	printf("내가 태어난 연도는 %d년 입니다.\n", nowYear + 1 - age);
	int result = nowYear + 1 - age;
	printf("답:%d\n", result);

	//4.
	int input;
	float myPi = 3.14;
	printf("반지름을 입력하세요.");
	scanf_s("%d", &input);
	printf("원의 넓이: %f.\n", input * input * myPi);
	printf("원의 둘레: %f.\n", input * 2 * myPi);
	int result1 = input * input * myPi;
	int result2 = input * 2 * myPi;

	//5.
	int Byte;
	printf("Byte를 입력하세요.");
	scanf_s("%d", &Byte);
	printf("출력:%dbit.\n", Byte * 8);

	//6. 
	int bit;
	printf("bit를 입력하세요.");
	scanf_s("%d", &bit);
	printf("출력:%dByte\n", bit / 8);

	//7
	printf("%d*8=%d 값입니다.", Byte, bit);




	return 0;


}