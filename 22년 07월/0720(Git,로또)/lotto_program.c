#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int dulplicate(int* lotto);
void quickSort(int* lotto,int left,int right);
int print(int* lotto);
void swap(int* lotto,int a, int b);
int partition(int* lotto, int left, int right);


int main()
{
	srand(time(NULL));
	int lotto[7];
	int left = 0; //0���� �ʱⰪ ����
	int lotto_size = (sizeof(lotto) / sizeof(int)); //7
	int right = lotto_size - 1;//6

	duplicate(lotto);
	quickSort(lotto,left,right);
	print(lotto);

	return 0;
}

int duplicate(int* lotto) //�ߺ� ����
{
	int temp;
	for (int i = 0; i < 7; i++) //7�ڸ� �̾ƾ� �ϱ� ����
	{
		while (1)
		{
			lotto[i] = rand() % 45 +1;
			temp = 0; //bool �Լ� ���� ����
			for (int j=0; j < i; j++) //���� �迭��� ���ϴ� �ݺ���
			{
				if (lotto[i] == lotto[j]) //�ߺ����� ������ for�� ����
				{
					temp = 1; 
					break;
				}
			}
			if (temp == 0); //�ߺ��� ���ٴ� ���̹Ƿ� while �� ����. 
			{
				break; 
			}
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
	for (int i = 0; i < 7; i++)
	{
		printf(" [%d] ", lotto[i]);
	}
	return 0;
}