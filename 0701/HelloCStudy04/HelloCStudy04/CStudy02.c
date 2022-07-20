#include<stdio.h>
int main()
{
	//증감 연산자
	int a = 5;
	
	a++; //a=a+1; a+=1
	++a; 
	a--; //a=a-1; a-=1
	--a;
	
	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", a);

	int b = a++ + ++a;
	printf("b=%d\n", b, a);

	a = 7;
	a++;
	int c = a + a;
	a++;
	printf("c=%d, a=%d", c, a);

	return 0;

}