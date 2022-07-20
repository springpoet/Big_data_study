#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[1024] = { 0, };
	int b[1024] = { 0, };
	int n, count, l, i, k;
	a[0] = 1;

	printf("Enter : ");
	scanf_s("%d", &n);

	printf("%3d\n", a[0]);

	for (int m = 1; m < n; m += 1)
	{
		i = 0;
		l = 0;
		count = 1;

		while (a[i] != 0)
		{
			if (a[i + 1] == a[i])
			{
				count += 1;
			}
			else
			{
				b[l] = a[i];
				printf("%3d", b[l]);
				l += 1;

				b[l] = count;
				printf("%3d", b[l]);
				l += 1;
				count = 1;
			}
			i += 1;
		}
		for (k = 1; k < 1024; k += 1)
		{
			a[k] = b[k];
			b[k] = 0;
		}

		printf("\n");
	}
	return 0;
}