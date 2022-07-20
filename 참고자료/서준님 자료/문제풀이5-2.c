#include<stdio.h>
int five(int num1, int num2)
{
	int sum = 0;
	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}
	printf("%d", num1);

	while (num1!=num2) 
	{
		num1++;
		printf("+%d", num1);
	}
	printf("=%d", sum);
	return sum;
}
int main()
{
	printf("값을 두개 입력해야");
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);
	five(n1, n2);
		
	return 0;
}