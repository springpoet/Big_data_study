#include<stdio.h>
int main()
{
	// int a = 10;
	// int ptr_a = &a;
	// &a�� 10�� �ִ� �ּ�.
	// int* ptr_a = 10;
	// *ptr_a= ptr_a�� ��ġ�� ��=&a ��ġ�� ��= a = 10
	// ptr_a = &a
	int numbers[6] = { 0, };//{0,}; <-0���� �ʱ�ȭ
	char mbti[5] = "ISFP";

	int* ptr_n = numbers; //*ptr_n�� numbers�� �� =0,0,0,0,0,0
	char* m = mbti; // *m�� mbti�� ��="ISFP"

	*m = 'E';
	*ptr_n = 100;
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);
	//*ptr_n=100�� numbers�� ù���ڸ� 100���� �ٲٴ� �Ͱ� ����. 
	//���� ���� {0,0,0,0,0,0}�� ���¿��� {100,0,0,0,0,0(���� �ٲ� ��)
	//�׷��� ??���� ��½� [0]=100,[1]=0 ...[5]=0�� ��µ�

	printf("%s\n", mbti);
	//*m='E'�� �� mbti���� ù ���ڸ� E�� �ٲ۴ٴ� �Ͱ� ����.
	//���� ����{I,S,F,P}�� ���¿��� {E,S,F,P}�� �ٲ�
	//�׷��� ������ ��½� 'ESFP'�� �ȴ�.

	scanf_s("%d", &numbers[1]);
	//scanf_s���� �Է� ���� ���� \n�� ������ �ȵȴ�.
	//numbers�� ��ġ�� 2��° ���ڸ� �ǹ�. [0]�� ù ����.
	// ù ���ڸ� ���� �ٲ� ���� ���(%d)�� ��Ÿ����
	//scanf_s("%d", numbers + 2);
	//numbers=ptr_n�̱⶧���� 
	//numbers+2=ptr_n+2=numbers�� �ּҿ� 3��° �ٲ� ���ڸ� ����϶�� ��
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	printf("mbti�� �ٲ㺸��");
	gets(m);
	printf("%s\n", mbti);
	printf("%s\n", m);
	//m�� mbti�� ���̴�. 
	//������ ISFP�� ���� ���ڿ��� ������ �Ǵ°�.

	return 0;
}