#include<stdio.h>
#define MAX 1024//매크로 상수, 스택보다 먼저 처리되기 때문에 배열 크기 할당 가능
int main()
{
	//배열 안에 숫자를 넣고 가장 큰 값, 큰 값의 인덱스 출력
	//최댓값,최소값 찾는 문제는 많이 했음.
	
	//함수없이 그냥 풀기
	int numbers[5];
	int mynum[MAX];
	//int num = 5;
	//int numbers2[num];//변수로 배열 크기 지정 못하기 때문에 malloc, calloc씀
	//num과 numbers 둘 다 스택 영역에 있기 때문에 할당 불가능.

	int size = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("%d번째 숫자 입력 : ", i);
		scanf_s("%d", &numbers[i]);
	}
	int max = numbers[0];
	int max_index = 0; // 첫번째 숫자를 가장 크다고 가정
	for (int i = 1; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; // 정답
		}
	}
	printf("최댓값은 [%d]에 있습니다.\n", max_index);
	
	return 0;
}