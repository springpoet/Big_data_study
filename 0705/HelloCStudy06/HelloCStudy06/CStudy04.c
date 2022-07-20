#include<stdio.h>
int main()
{
	//학생 100명의 나이를 저장하는 법
	//1.변수를 100개 만든다
	//2.배열을 만든다
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i - 1] = i;
	//배열은 시작을 [0]으로 보고, 끝을 [길이-1]로 본다.

	//처음 배열 만들 때 값을 할당 가능
	int numbers[5]={ 10,20,30,40,50 };
	printf("%d %d %d %d %d\n", 
		numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	int* ptr = stu_numbers;

	printf("\n%d\n", stu_numbers[50]);//원래는 51
	
	//ptr_a=&a=a의 주소(위치), *ptr_a=ptr_a위치의 값=즉 a.
	//(*ptr_a)++=ptr_a위치의 값을 증가시킴
	//stu_numbers는 100칸짜리 메모리의 시작점. 즉 stu_numbers도 포인터
	//주소의 시작부분을 가르키기 때문에 0부터 시작. 따라서 3번째 값을 바꾼다=+2
	//ptr[0]=*ptr=stu_numbers[0]=*(stu_numbers+0)

	ptr[50] = 1000;
	printf("\n%d\n", stu_numbers[50]);//근데 1000으로 바뀜
	
	printf("[2]번째(세번째)값 변경하기\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	//ptr은 어디든 가리킬 수 있지만, 
	int my_nums[5] = { 50,60,70,80,90 };
	ptr = my_nums;
	printf("%d", ptr[2]);

	stu_numbers = my_nums;//stu_numbers는 포인터 상수라서 불가능









	return 0;
}