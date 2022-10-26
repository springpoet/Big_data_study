#include<stdio.h>

//배열의 함수의 매개변수로 넘길 때는 
//배열의 크기도 같이 넘겨줘야 함.
//그리고 매개변수는 int numbers[]라고 해도 되고
//int* numbers 라고 해도 됨.
//배열은 포인터이기 때문.
void printArr(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);
}


int main()
{
	//배열
	//1개의 변수가 여러 개의 값을 관리함.

	int numbers1[5] = { 5,4,10,-2,1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = 300;
							//(20)				(4)
	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++)
		printf("%d\n", numbers1[i]);

	printArr(numbers2, 3);

	return 0;
}