#include<stdio.h>
int main()
{
	//1. 5개의 숫자를 입력받고 그 중에서 가장 큰 숫자와 작은 숫자를 찾아라
	int num[5];
	int max;
	int min;
	int i;
	max = num[0];
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 숫자를 입력하세요", i + 1);
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < 5; i++)
	{


		if (num[i] > max)
			max = num[i];

	}
	min = num[0];
	for (i = 0; i < 5; i++)
	{

		if (num[i] < min)
			min = num[i];


	}
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d번째 숫자를 입력하세요", i + 1);
	//	scanf_s("%d", &num[i]);
	//}
	//max = num[0];
	//for (i = 0; i < 5; i++)
	//{
	//	if (max > num[i]);
	//	max = num[i];
	//}
	//min = num[0];
	//for (i = 0; i < 5; i++)
	//{
	//	if (min < num[i])
	//		min = num[i];
	//}
	//printf("가장 큰 수는 %d입니다.\n", max);
	//printf("가장 작은 수는 %d입니다.\n", min);





	//2. 문자열 2개를 입력받고 이 2개가 같은지 다른지 여부를 출력해주세요
	int str1[5];
	int str2[5];
	for (i = 0; i < 5; i++)
	{
		printf("str1의 문자열 5개 입력하세요.%d", i + 1);
		scanf_s("%d", &str1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("str2의 문자열 5개 입력하세요.%d", i + 1);
		scanf_s("%d", &str2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (str1[i] == str2[i])
			printf("같은 문자열");
		else
			printf("다른 문자열");
	}


	return 0;

}