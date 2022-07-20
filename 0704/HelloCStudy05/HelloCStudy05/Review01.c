#include<stdio.h>
int main()
{
	//1.
	printf("안녕하세요. 제 이름은 김성근입니다.\n");
	
	//2.
	int age;
	printf("나이는? ");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n", age);

	//3.
	int a, b;
	printf("입력a: ");
	scanf_s("%d",  &a);
	printf("입력b: ");
	scanf_s("%d", &b);
	printf("출력:%d\n", (a * a) + (b * b));

	//4. 
	char name[100];
	printf("옆자리 학생의 이름은?\n");
	rewind(stdin);
	gets(name); //띄어쓰기 필요할 때
	// scanf_s("%s", &name, sizeof(name));
	printf("내 옆자리 학생의 이름은 %s입니다.\n", name);

	//5. 달러 입력 후 출력
	printf("몇 달러?");
	double dollar;
	scanf_s("%lf", &dollar);
	printf("출력 : %lf원\n", dollar * 1298.89);








	return 0;
}