#include<stdio.h>

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

double q2_average(int* arr, int size)
{
	double sum = 0;
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	average = sum / size;
	return average;
}

int* arr()
{
	static int arr[5] = { 10,20,30,40,50 };
	return arr;
}
int main()
{
	int student[3];
		printf("님들 몇 살?! ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &student[i]);
	}
	
	printArr(student, 3);

	//3번.
	printf("Average = %.2f\n",q2_average(student, 3));

	//4번.
	int* arr2 = arr();
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	//5번.
	printArr(arr2, 5);

	return 0;
}