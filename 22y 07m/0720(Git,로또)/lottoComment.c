#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int rand_num(int* lotto);
void swap(int* lotto, int a, int b);
int partition(int* lotto, int left, int right);
void quickSort(int* lotto, int left, int right);
int odd(int* lotto, int size);
int even(int* lotto, int size);
int print(int* lotto);


int main()
{
	srand(time(NULL));
	int lotto[7];
	int left = 0; //0���� �ʱⰪ ����
	int lotto_size = (sizeof(lotto) / sizeof(int)); //7
	int right = lotto_size - 2;//6

	rand_num(lotto);
	quickSort(lotto, left, right);
	print(lotto);

	return 0;
}

int rand_num(int* lotto) //�ߺ�, Ȧ��, ¦�� ����
{
	int temp;//bool �Լ� ����
	int odd; //Ȧ�� üũ
	int even;//¦�� üũ
	for (int i = 0; i < 7; i++) //7�ڸ� �̾ƾ� �ϱ� ����
	{
		lotto[i] = rand() % 45 + 1;
		while (1)
		{
			temp = 0;
			for (int j = 0; j < i; j++) //���� �迭��� ���ϴ� �ݺ���
			{
				if (lotto[i] == lotto[j]) //�ߺ����� ������ for�� ����
				{
					temp = 1;
					i--;
					break;
				}
			}
			if (temp == 0); //�ߺ��� ���ٴ� ���̹Ƿ� while �� ����. 
			{
				break;
			}

			for (int j = 0; j < 6; j++)
			{
				if (lotto[j] % 2 == 0)
				{
					even++;
				}
				else
				{
					odd++;
				}
			}
			if (even == 6 || odd == 6) //��µ� ���� ���� ¦���ų� ���� Ȧ���� �ٽ� �̱�
			{
				i--;
				break;
			}
		}
		if ((lotto[i - 1] + lotto[i] + lotto[i + 1]) / 3 == lotto[i]) //���ӵ� �� �� ����
		{
			i--;
		}
	}
	return 0;
}

void swap(int* lotto, int a, int b) //��ġ �ٲ��ִ� �Լ�
{
	int temp = lotto[b];
	lotto[b] = lotto[a];
	lotto[a] = temp;
}

int partition(int* lotto, int left, int right) //�ǹ��� �߽����� ������
{
	int pivot = lotto[left]; //�迭�� ó���� �ǹ����� ����
	int i = left;
	int j = right;

	while (i < j) //left �ε��� ���� right �ε��� ������ ���� ��� ����
	{
		while (pivot < lotto[j]) //�ǹ��� �������� ���� ������ �� �ǹ����� ���� ���� ���� ������ ���� 
		{
			j--;//�������� �ǹ������� �;��ϱ� ������ '--'
		}
		while (i < j && pivot >= lotto[i])//left ���� right �����鼭, �ǹ��� left������ ���ų� Ŀ����
										//left���� right���� �������ų� left���� Ŀ���� ����
		{
			i++;//�ǹ����� �������� �����ϱ� ������ ++
		}
		swap(lotto, i, j); //lotto �迭���� left�� right ��ġ�� �ٲ��ش�.
	}
	lotto[left] = lotto[j]; //left���� right�� �������� 
	lotto[j] = pivot; //�ǹ��� right�� �ٲٰ� ��ȯ �� ����
	return j;
}

void quickSort(int* lotto, int left, int right)
{
	if (left >= right) //
	{
		return;
	} //left�� right���� ũ�⋚���� ���̻� �� �ʿ䰡 ����.

	int pivot = partition(lotto, left, right); //partition���� ���� ���� j=�ǹ����� ����.

	quickSort(lotto, left, pivot - 1); //�ǹ��� �������� ���� �κ�
	quickSort(lotto, pivot + 1, right);//�ǹ��� �������� ������ �κ�. ����Լ� ���� 
										//�迭�� ũ�Ⱑ 0 �Ǵ� 1�� �� ������ ����
}

int print(int* lotto) //�ܼ� ��� �Լ�
{
	for (int i = 0; i < 6; i++)
	{
		printf(" [%d] ", lotto[i]);
	}
	printf("���ʽ� ��ȣ : [%d]", lotto[6]);
	return 0;
}

