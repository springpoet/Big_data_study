#include<stdio.h>
int main()
{
	//포인터
	int a = 10;
	int* ptr_a = &a;

	//다중 포인터
	int** pp_aa = &ptr_a;
	//다중 포인터를 이용해 배열에 있는 값을 가르키기
	//4칸짜리 1차원 배열 3개 관리하는 2차원 배열이 있다고 해보자.
	int numbers[3][4] = {
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};
	int** ptr = numbers;
	printf("%d", numbers[0][0]); //됨
	printf("%d", ptr[0][0]);//안됨
	//4칸짜리 배열을 가리키는 포인터, 배열포인터를 만들어야함
	int(*nptr)[4] = numbers;

	printf("\n%d\n", numbers[1][1]);
	printf("\n%d\n", nptr[1][1]);
	//배열은 포인터이고 포인터 앞에 별을 붙이면 그 안의 숫자 출력가능
	printf("\%d\n", **numbers);
	printf("\%d\n", **(numbers+1));
	printf("\n%d\n", *(*numbers + 1));
	printf("%d\n", *(*nptr + 10));//110, 11번째 숫자 


	//배열
	int numbers[5] = { 1,20,50,30,4 };

	//다차원 배열= 다중 포인터에서 파생
	int multi_dim[3][5] //2차원 배열. 3행 2열
		= {
			{3,4},{1,11},{99,22}
	};
	//305호 학생들의 나이
	int room[5] = { 30,22,25,29,27 };

	//3층에 교실이 3개 있고, 거기 있는 학생들의 나이
	int r_room[3][5]; //이중 배열
	int** rr = r_room;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			r_room[i][j] = i + j + 10;

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d\n", r_room[i][j]);
	}
	printf("\n");

	return 0;
}