#include<stdio.h>
int main()
{
	//1. 내 이름은 %s입니다.
	printf("내 이름은 %s입니다.\n", "김성근");
	//2. 내 혈액형은 %c입니다.
	printf("내 혈액형은 %c입니다.\n", 'B');
	//3. 내 나이는 %d살이고 나는 %d년생입니다.
	printf("내 나이는 %d살이고 나는 %d년생입니다.\n", 28, 1995);
	//4. 내 MBTI는 %s이고, 내 키는 %f입니다.
	printf("내 MBTI는 %s이고, 내 키는 %f입니다.\n", "ISFP", 175.0);
	//5. 내 별명은 "%s"입니다.
	//ctrl + d = 줄복사
	//alt + shift 하고 키보드 위아래하면 여러개 동시 입력가능
	//ctrl + alt 누르고 마우스 클릭하면 여러군데 클릭됨
	printf("내 별명은 \"%s\"입니다.\n", "고니");
	printf("내 별명은 \"%s\"입니다.\n", "아아충");
	printf("내 별명은 \"%c\"입니다.\n", '7');
	printf("내 별명은 \"%d\"입니다.\n", '7');//55
	//'7'은 아스키코드상 숫자 55이기 때문, 따옴표 없이 7만 써야함

	
	return 0;

}