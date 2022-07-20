#include<stdio.h>
int main()
{
	printf("n값을 입력하시오");
	int n;
	scanf_s("%d", &n);

	char dd[2048];
	dd[0] = 0;
	dd[1] = 1;

	for (int i =2; i<=n;i++)
	{
		dd[i] = dd[i - 1] + dd[i - 2];
		dd[i - 2] = dd[i - 2] + '0';
	}

	dd[0] = dd[0] + '0';
	dd[1] = dd[1] + '0';
	dd[n] = dd[n] + '0';
	dd[n - 1] = dd[n - 1] + '0';
	

	
	printf("\n%s\n", dd);
	return 0;
}