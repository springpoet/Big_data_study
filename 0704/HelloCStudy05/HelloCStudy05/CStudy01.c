#include<stdio.h>
int main()
{
	//�ݺ����� ���ؼ� ��� �غ���
	//break, continue Ű����
	//while, do-while�� ���ؼ� �� �غ���

	//break : ��� �ݺ������� ����. ��� �����
	//continue : ���� �ܰ�� ��ŵ��
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue;//i�� 13579�϶� continue ������ i++�� �ٷ� �Ѿ
		printf("����:%d\n", i);// �ð� �ʰ��ϸ� ���� ������ �Ѿ�� ���α׷�(idea)
	}
	//while:~�ϴ� ����
	// ��ȣ ���� ���� ���̸� ��� ����
	int count = 0;
	while (count < 10)
	{
		count++;
		printf("count=%d\n", count);
	}
	while (1)
	{
		if (count > 100)
			break;
		count += 10;
		printf("count=%d\n", count);
	}
	do
	{
		//while ���� ������ �����̶� �� 1���� ����
		//while ���� ��ȣ (while())���� ������ �����̸� 1���� �������� ����
		printf("1���� ������!!");
	} while (count<100);
	//���� ���� : ������-�迭-���ڿ�-�Լ�-����ü-���Ḯ��Ʈ, ����, ť, �˰���(���� ���� ��)
	//���Ḯ��Ʈ���ʹ� �ڷᱸ��, �˰��� �����̶� ��ȭ�� ����
	return 0;
}