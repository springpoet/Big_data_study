#include<stdio.h>
int main()
{
	//1. 5���� ���ڸ� �Է¹ް� �� �߿��� ���� ū ���ڿ� ���� ���ڸ� ã�ƶ�
	int num[5];
	int max;
	int min;
	int i;
	max = num[0];
	for (i = 0; i < 5; i++)
	{
		printf("%d��° ���ڸ� �Է��ϼ���", i + 1);
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
	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d��° ���ڸ� �Է��ϼ���", i + 1);
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
	//printf("���� ū ���� %d�Դϴ�.\n", max);
	//printf("���� ���� ���� %d�Դϴ�.\n", min);





	//2. ���ڿ� 2���� �Է¹ް� �� 2���� ������ �ٸ��� ���θ� ������ּ���
	int str1[5];
	int str2[5];
	for (i = 0; i < 5; i++)
	{
		printf("str1�� ���ڿ� 5�� �Է��ϼ���.%d", i + 1);
		scanf_s("%d", &str1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("str2�� ���ڿ� 5�� �Է��ϼ���.%d", i + 1);
		scanf_s("%d", &str2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (str1[i] == str2[i])
			printf("���� ���ڿ�");
		else
			printf("�ٸ� ���ڿ�");
	}


	return 0;

}