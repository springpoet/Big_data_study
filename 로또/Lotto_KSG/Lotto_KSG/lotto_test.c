#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int overlap(int* lotto);
int sort(int* lotto);
int print(int* lotto);

int main()
{
	srand(time(NULL));
	int lotto[6];

	overlap(lotto);
	sort(lotto);
	print(lotto);

	return 0;
}

int overlap(int* lotto)
{
	int i, j, save;
	for (i = 0; i < 6; i++)
	{
		while (1)
		{
			lotto[i] = rand() % 45 + 1;
			save = 0;
			for (j = 0; j < i; j++)
			{
				if (lotto[i] == lotto[j])
				{
					save = 1;
					break;
				}
			}
			if (save == 0)
			{
				break;
			}
		}
		
	}
	return 0;
}

int sort(int* lotto)
{
	int tmp, i, j;
	tmp = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (lotto[j] > lotto[j + 1])
			{
				tmp = lotto[j];
				lotto[j] = lotto[j + 1];
				lotto[j + 1] = tmp;
			}
		}
	}
	return 0;
}

int print(int* lotto)
{
	int i;
	for (i = 0; i < 6; i++)
	{
		printf(" [%d] ", lotto[i]);
	}
	return 0;
}