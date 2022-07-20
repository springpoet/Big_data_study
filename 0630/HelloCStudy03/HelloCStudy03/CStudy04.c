#include<stdio.h>
int main()
{
	//if문:java, c#, js 다 똑같음
	//if=만약에, 경우의 수가 여러개 이거나 
	// 특정 경우에 대해서만 여러개의 코드를 작성할 경우 사용
	//switch case문:java, c#, js 다 똑같음

	int age = 10;
	if (age > 0)
		printf("age는 양수입니다.\n"); //age 값이 0이거나 음수면 출력 안됨
	age = -1;
	if (age < 0)//괄호 안에 있는 조건이 true일때 작성해야 하는 코드가 2줄 이상이면 중괄호로 묶어야함
	{
		printf("age는 음수입니다.\n");
		printf("나이는 음수일 수 있습니다.\n");
	}

	//if문에 대해 하고 싶은 말
	//1. if 끝에 세미콜론 붙이지 말기(v)
	//if(age==0); <-;붙이면 안의 조건을 무조건 true로 본다.
	//2.if(age=1) <-age에 1을 대입시키는거라서 무조건 true.=if(1)과 같음. 1=true, 0=false.
	// 대입연산자 사용X->==사용해야함
	//참고로 0 이외의 숫자는 양수 음수 모두 true

	age = 0;
	if (age = -1)
		printf("이건 무조건 출력됨."); //(이럴 때 디버깅 사용 가능)
	//3. 이렇게 적지 않는다. 인트 후 줄바꿈 꼭 하기 (가독성 증가)
	if (age > 0) printf("age는 양수입니다."); 
	if (age > 0) {printf("age는 양수입니다."); }

	//4. java랑 c계열(c,c++,c#)은 권장 중괄호 위치를 다르게 권장함.
	if (age > 0) {//<여기 부분이 다름. c계열은 줄바꿈
		printf("age는 양수");
	}

	//경우의 수가 2가지인 경우
	if (age > 0)
	{
		printf("age는 양수");
	}
	else//if문의 그 경우의 수가 아닌 경우
	{
		printf("age는 양수가 아니다.");
	}

	//경우의 수가 3가지 이상인경우
	if (age > 0)
		printf("age는 +");
	else if (age == 0) //else if의 개수는 많아도 상관없지만 너무 많으면 가독성 하락
		printf("age는 0");
	else
		printf("age는 음수");
	//if, if, else인 경우: (if),(if,else)2덩어리로 구분 마지막 else는 출력-집에서 이거 적어보기
	//()소괄호 또는 괄호 {}중괄호(brace),[]대괄호
	//1. if문은 중첩이 가능하다.
	age = 10;
	if (age > 0)
	{
		if (age % 2 == 0)
			printf("\n\n\n\n짝");
		else
			printf("\n\n\n\n홀");

	}
	//2. if문의 괄호 안에 삼항연산자처럼 여러 개의 식 적기 가능
	if (age > 0 && age % 2 == 0)//두 조건 다 충족해야 출력
		printf("\n\n\n\nage는 자연수이면서 짝수이다.");
	if (age > 0 || age % 2 != 0) //둘 중에 하나라도 충족해야 출력
		printf("\n\n\n\nage는 자연수이거나 혹은 홀수다.");
	//xor(^^)=둘 다 맞거나 둘 다 틀리면 안되고 하나만 충족해야 출력


	return 0;
}