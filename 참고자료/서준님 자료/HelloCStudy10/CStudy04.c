#include<stdio.h>
int g = 0;  //전역 변수


void up1(int l){  //지역변수를 매개
	l++;
}

void up2(int* l) { //지역변수의 위치(포인터)를 매개
	
	(*l)++;
}

//전역변수에 접근
void up3() {
	g++;
}

int main() {
	int local = 10;
	up1(local);  //local의 값을 넘김
	printf("local = %d \n", local);
	
	up2(&local); //local의 주소를 넘김
	printf("local = %d \n", local);

	up3(g);
	printf("g = %d \n", g);  
}