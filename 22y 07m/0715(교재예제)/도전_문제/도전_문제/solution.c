#include<stdio.h>

void function2(int a2, int b2)
{
	int i;
	while (a2 <= b2) //a2가 b2보다 커지면 종료.
	{
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", a2, i, a2 * i);
		printf("\n");
		a2++;
	}
}

int function3(int a3, int b3)
{
	if (a3 < b3)
	{
		int temp = a3;
		a3 = b3;
		b3 = temp;
	}
	while (b3 != 0)
	{
		int temp2 = a3 % b3;
		a3 = b3;
		b3 = temp2;

	}
	//while(1)
	//{
	//	int temp = a3;
	//	a3 = a3 % b3;
	//	b3=temp;
	//}
	return a3;
}
int main()
{
	//1.
	int a1;
	printf("10진수 입력: ");
	scanf_s("%d", &a1);

	printf("16진수로 출력 : %x\n", a1);

	printf("\n--------------\n");

	//2.
	int a2, b2;

	printf("두 수를 입력하세요. : ");
	scanf_s("%d,%d", &a2, &b2);
	if (a2 < b2)
		function2(a2, b2);
	else//b2가 더 클 경우 바꿔서 입력.
		function2(b2, a2);

	printf("\n--------------\n");

	//3.
	int a3;
	int b3;
	printf("두 수를 입력하세요. : ");
	scanf_s("%d,%d", &a3, &b3);
	function3(a3, b3);
	printf("%d\n", function3(a3, b3));

	printf("\n--------------\n");

	//4.
	int money4;
	int bread4 = 500;
	int snack4 = 700;
	int coke4 = 400;
	int bread4_n, snack4_n, coke4_n;//갯수
	printf("현재 가지고 있는 금액 : ");
	scanf_s("%d", &money4);
	//하나씩은 무조건 사야함
	for (bread4_n = 1; money4 - (bread4_n * bread4) > 0; bread4_n++)
		//빵을 n개 샀을때 0보다 커야함
	{
		for (snack4_n = 1; money4 - (snack4_n * snack4) > 0; snack4_n++)
			//과자를 n개 샀을 때 0보다 커야함,
		{
			for (coke4_n = 1; money4 - (coke4_n * coke4) > 0; coke4_n++)
				//콜라를 n개 샀을때 0보다 커야함.  (음수는 불가능하기 때문)
			{
				if ((bread4_n * bread4) +(snack4_n * snack4) + (coke4_n * coke4) == money4)
					//각 n 개를 다 했을 때 가진 돈과 같은 경우 출력)
				{
				printf("크림빵 : %d개, 새우깡 : %d개, 콜라 : %d개\n", bread4_n, snack4_n, coke4_n);
				}
			}
		}
	}


	printf("\n--------------\n");

	//5.소수 10개 출력할 변수 , 2부터 1씩 증가 할 변수 필요
	int a5;
	int count5=0;
	for (a5 = 2; count5 <= 20; a5++)
	{
		for (int i = 2; i <= a5; i++)
		{
			if (i == a5)
			{
				printf("%d, ", a5);
				count5++;
			}
			if (a5 % i == 0)
				break;
		}
	}
	printf("\n");


	return 0;
}
			
