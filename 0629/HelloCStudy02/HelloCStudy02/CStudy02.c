#include<stdio.h>
int main()
{
	int age;
	printf("나이를 입력하세요.");
	scanf_s("%d", &age);//%d뒤에 \n 붙이지 말기. 값을 입력받고 있는게 있으면 끄고 다시 실행
	printf("내 나이 : %d\n", age);
	printf("나는 %d년생입니다.\n", 2022 + 1 - age);

	//4 원의 넓이와 둘레
	int r;
	printf("반지름을 입력하세요.");
	scanf_s("%d", & r);
	printf("원이 넓이 : %f\n", r * r * 3.14);
	printf("원의 둘레 : %f\n", r * 2 * 3.14);

	//5 Byte와 bit 전환
	printf("몇 Byte?\n");
	int Byte;
	scanf_s("%d", &Byte);
	printf("%d Byte = %d bit\n", Byte, Byte * 8);

	//6
	int bit;
	printf("몇 bit?");
	scanf_s("%d", &bit);
	printf("%d bit = %d Byte\n", bit, bit / 8);

	//7 
	int myByte = Byte;
	int mybit = Byte * 8;
	
	printf("%d Btye * 8 = %d bit\n", myByte, mybit);

	return 0; //코드 이동 : alt + 화살표로 위아래 이동 가능
}
