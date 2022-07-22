#include<stdio.h>
#include<stdlib.h>//동적 배열용 헤더




int main()
{
	//10칸짜리 배열 작성
	int* dynamic_arr = (int*)malloc(10 * sizeof(int));
	int size;
	printf("배열 사이즈 적기");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		dynamic_arr2[i] = i+10;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", dynamic_arr2[i]);
	}
	
	//malloc : 메모리 초기화가 안 됨(처음에 쓰레기 값 입력 된 상태)
	//calloc : 0으로 초기화 함

	//10칸짜리 배열을 만들었는데 안의 값이 0으로 초기화 된 상태
	int* mynumbers = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%d\n", mynumbers[i]);

	//동적 메모리는 프로그래머가 수동으로 할당한 것이기 때문에
	//다 쓰고 free로 없애줘야 함.
	//메모리 누수(memory leak) 발생.
	//프로그램이 이대로 끝난다면 굳이 안써도 되지만 
	//지속될 경우 free를 해야한다.
	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);


	return 0;
}