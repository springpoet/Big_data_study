#include<stdio.h>
int main()
{
	//������
	int a = 10;
	int* ptr_a = &a;

	//���� ������
	int** pp_aa = &ptr_a;
	//���� �����͸� �̿��� �迭�� �ִ� ���� ����Ű��
	//4ĭ¥�� 1���� �迭 3�� �����ϴ� 2���� �迭�� �ִٰ� �غ���.
	int numbers[3][4] = {
		{10,20,30,40},
		{50,60,70,80},
		{90,100,110,120}
	};
	int** ptr = numbers;
	printf("%d", numbers[0][0]); //��
	printf("%d", ptr[0][0]);//�ȵ�
	//4ĭ¥�� �迭�� ����Ű�� ������, �迭�����͸� ��������
	int(*nptr)[4] = numbers;

	printf("\n%d\n", numbers[1][1]);
	printf("\n%d\n", nptr[1][1]);
	//�迭�� �������̰� ������ �տ� ���� ���̸� �� ���� ���� ��°���
	printf("\%d\n", **numbers);
	printf("\%d\n", **(numbers+1));
	printf("\n%d\n", *(*numbers + 1));
	printf("%d\n", *(*nptr + 10));//110, 11��° ���� 


	//�迭
	int numbers[5] = { 1,20,50,30,4 };

	//������ �迭= ���� �����Ϳ��� �Ļ�
	int multi_dim[3][5] //2���� �迭. 3�� 2��
		= {
			{3,4},{1,11},{99,22}
	};
	//305ȣ �л����� ����
	int room[5] = { 30,22,25,29,27 };

	//3���� ������ 3�� �ְ�, �ű� �ִ� �л����� ����
	int r_room[3][5]; //���� �迭
	int** rr = r_room;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			r_room[i][j] = i + j + 10;

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d\n", r_room[i][j]);
	}
	printf("\n");

	return 0;
}