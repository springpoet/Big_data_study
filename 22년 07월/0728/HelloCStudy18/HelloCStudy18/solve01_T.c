#include<stdio.h>

//배열은 포인터이기 때문에 함수의 매개변수로 쓰이게 되면
//함수에서 값의 변화가 있을 때 배열에서도 값의 변화가 있다.
//void increaseNum(int numbers[])
//사이즈를 같이 넘기든지 아니면 쓰레기값이 들어가 있는 걸
//이용해서 하든지.... 그냥 사이즈 같이 넘겨주면 됨
void increaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
		numbers[i] += n;
}
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
void decreaseNum(int* numbers, int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] -= n;
	}
}
void q4_decreaseNum(int numbers[], int size, int n)
{
	if (n < 0)
		return;
	for (int i = 0; i < size; i++)
	{
		int num = numbers[i];
		num -= n;
		if (num < 0)
			return;
	}
}
int main()
{
	//하나의 변수를 통해서 여러 개의 숫자를
	//관리할 수 있는 게 배열
	//처음에 선언하자마자 값 넣기
	int ages[5] = { 23, 25, 30, 29, 50 };
	int ages2[3] = { 10,20,30 };

	//선언하고나서 값 넣기
	int ages3[3];
	ages3[0] = 20;
	ages3[1] = 30;
	ages3[2] = 40;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ages[i]);
		ages[i] = i * i + ages[i];//아무값이나 넣어봄
	}

	printf("---------1번-----------\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);
	increaseNum(ages2, 3, 100);
	printf("---- 변화 후----\n");
	for (int i = 0; i < 3; i++)
		printf("%d\n", ages2[i]);
	
	//2번.
	printArr(ages, sizeof(ages) / sizeof(int));

	//3번.


	return 0;

}