#include<stdio.h>
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
double average(int ages[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += ages[i];
	}
	return sum / (double)size; //double을 입력해서 형태 변환 해야 함.
}
int* myages()
{
	static int ages[3];//static을 넣지 않으면 입력한 값이 함수안에서만 존재하기 때문에
		//선언 해야 함.
	//함수가 끝날 때 사라지지 않아야 호출 가능. 프로그램이 끝날 때 사라짐.
	for (int i = 0; i < 3; i++)
	{
		printf("학생의 나이 입력");
		scanf_s("%d", &ages[i]);
	}
	return ages;
}
	int main()
	{
		int ages[3];
		for (int i = 0; i < 3; i++)
		{
			printf("학생의 나이 입력 ");
			scanf_s("%d", &ages[i]);
		}
		//3번.
		printf("평균나이 : %.2f\n", average(ages, 3));

		//4번.
		int* values = myages();
		for (int i = 0; i < 3; i++)
		{
			printf("%d\n", values[i]);
		}

		printArr(values, 3);

		return 0;
	}