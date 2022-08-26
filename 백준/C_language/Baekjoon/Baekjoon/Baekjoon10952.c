#include<stdio.h>
int main()
{
	int A=0 , B=0;
	while (A ==0 && B==0)
	{
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}