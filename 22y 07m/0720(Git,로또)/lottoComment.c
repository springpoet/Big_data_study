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
	int left = 0; //0으로 초기값 설정
	int lotto_size = (sizeof(lotto) / sizeof(int)); //7
	int right = lotto_size - 2;//6

	rand_num(lotto);
	quickSort(lotto, left, right);
	print(lotto);

	return 0;
}

int rand_num(int* lotto) //중복, 홀수, 짝수 제거
{
	int temp;//bool 함수 느낌
	int odd; //홀수 체크
	int even;//짝수 체크
	for (int i = 0; i < 7; i++) //7자리 뽑아야 하기 떄문
	{
		lotto[i] = rand() % 45 + 1;
		while (1)
		{
			temp = 0;
			for (int j = 0; j < i; j++) //앞의 배열들과 비교하는 반복문
			{
				if (lotto[i] == lotto[j]) //중복값이 있으면 for문 종료
				{
					temp = 1;
					i--;
					break;
				}
			}
			if (temp == 0); //중복이 없다는 뜻이므로 while 문 종료. 
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
			if (even == 6 || odd == 6) //출력된 수가 전부 짝수거나 전부 홀수면 다시 뽑기
			{
				i--;
				break;
			}
		}
		if ((lotto[i - 1] + lotto[i] + lotto[i + 1]) / 3 == lotto[i]) //연속된 세 수 제거
		{
			i--;
		}
	}
	return 0;
}

void swap(int* lotto, int a, int b) //위치 바꿔주는 함수
{
	int temp = lotto[b];
	lotto[b] = lotto[a];
	lotto[a] = temp;
}

int partition(int* lotto, int left, int right) //피벗을 중심으로 나눈다
{
	int pivot = lotto[left]; //배열의 처음을 피벗으로 설정
	int i = left;
	int j = right;

	while (i < j) //left 인덱스 값이 right 인덱스 값보다 작은 경우 실행
	{
		while (pivot < lotto[j]) //피벗의 우측부터 값을 비교했을 때 피벗보다 값이 작은 수를 만나면 종료 
		{
			j--;//우측부터 피벗쪽으로 와야하기 때문에 '--'
		}
		while (i < j && pivot >= lotto[i])//left 값이 right 작으면서, 피벗은 left값보다 같거나 커야함
										//left값이 right값과 같아지거나 left값이 커지면 종료
		{
			i++;//피벗부터 우측으로 가야하기 때문에 ++
		}
		swap(lotto, i, j); //lotto 배열에서 left와 right 위치를 바꿔준다.
	}
	lotto[left] = lotto[j]; //left값이 right와 같아지면 
	lotto[j] = pivot; //피벗을 right로 바꾸고 반환 후 종료
	return j;
}

void quickSort(int* lotto, int left, int right)
{
	if (left >= right) //
	{
		return;
	} //left가 right보다 크기떄문에 더이상 할 필요가 없다.

	int pivot = partition(lotto, left, right); //partition에서 리턴 받은 j=피벗으로 설정.

	quickSort(lotto, left, pivot - 1); //피벗을 기준으로 왼쪽 부분
	quickSort(lotto, pivot + 1, right);//피벗을 기준으로 오른쪽 부분. 재귀함수 형식 
										//배열의 크기가 0 또는 1이 될 때까지 실행
}

int print(int* lotto) //단순 출력 함수
{
	for (int i = 0; i < 6; i++)
	{
		printf(" [%d] ", lotto[i]);
	}
	printf("보너스 번호 : [%d]", lotto[6]);
	return 0;
}

