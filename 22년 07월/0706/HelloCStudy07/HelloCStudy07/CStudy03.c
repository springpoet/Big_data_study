#include<stdio.h>
int main()
{
	//1.
	int numbers[5];
	int size = sizeof(numbers) / sizeof(int);//= number[5]; 
	//size of-> byte값 구하는 것.
	//numbers는 5칸짜리 배열이니까 20
	//왜냐면 int 5개 저장하는 거고 int는 개당 4byte니까. size=20/4=5
	//c에서는 [5]부여시 공간만 제공해줌.
	for (int i = 0; i < 5; i++)
	{
		//int num;
		//scanf_s("%d", &num);
		//numbers[i] = num;
		printf("%d번째 숫자 입력\n", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int min = numbers[0]; // 가장 첫번째 문자를 최대, 최소로 '가정'한다.
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (min > numbers[i]);
		{
			min = numbers[i];
		}

	}
	printf("최댓값: %d, 최솟값: %d\n", max, min);




	return 0;
}