#include<stdio.h>
int main()
{
	if (0)
	{
		int a, b, c;
		printf("�� ������ �Է��ϼ���");
		scanf_s("%d,%d,%d", &a, &b, &c);
		int sum = 0;
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
				continue;
			else
				sum += i;
		}
		printf("%d���� %d������ ���̸鼭 %d�� ����� ����=%d", a, b, c, sum);
	}
	//2.
	//3�� ���, 5�ǹ��?
	//5kg �ָӴϷ� ���������� üũ, �������� ��.
	//�ȵǸ� 3kg �ָӴϿ� ��´�.
	int sugar;
	printf("���� �� kg?");
	scanf_s("%d", &sugar);
	int pocket = 0;//�ָӴϼ�
	while (1)
	{
		if (sugar % 5 == 0)
		{
			pocket += sugar / 5;
			printf("%d����\n", pocket);
			break;
		}
		sugar -= 3;
		pocket++;//3kg�ָӴ� �ϳ� ����
		if (sugar < 0)
		{
			printf("-1\n");
			break;
		}

	}


	return 0;
}