#include<stdio.h>
int main()
{
	//1.
	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);
	age < 20 ? printf("아이\n") : printf("성인");
	//2.음수에 대한 추가 경우의 수 적는법. 삼항연산자를 중첩을 시킨다.
	age < 20 ? (age < 0 ? printf("\n잘못된 메세지\n"): printf("\n아이\n"))
		: printf("\n성인\n");
	//3.
	printf("\n숫자를 입력하세요.");
	int num;
	scanf_s("%d", &num);

	num > 0 ? printf("\n양수\n") : (num == 0 ? printf("\n0\n") : printf("\n음수\n"));
	//양수면 바로 양수라고 적히지만 아닐경우 뒷 괄호 진행.
	
	

	return 0;
}