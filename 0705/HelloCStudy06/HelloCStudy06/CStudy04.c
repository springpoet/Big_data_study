#include<stdio.h>
int main()
{
	//�л� 100���� ���̸� �����ϴ� ��
	//1.������ 100�� �����
	//2.�迭�� �����
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++)
		stu_numbers[i - 1] = i;
	//�迭�� ������ [0]���� ����, ���� [����-1]�� ����.

	//ó�� �迭 ���� �� ���� �Ҵ� ����
	int numbers[5]={ 10,20,30,40,50 };
	printf("%d %d %d %d %d\n", 
		numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	int* ptr = stu_numbers;

	printf("\n%d\n", stu_numbers[50]);//������ 51
	
	//ptr_a=&a=a�� �ּ�(��ġ), *ptr_a=ptr_a��ġ�� ��=�� a.
	//(*ptr_a)++=ptr_a��ġ�� ���� ������Ŵ
	//stu_numbers�� 100ĭ¥�� �޸��� ������. �� stu_numbers�� ������
	//�ּ��� ���ۺκ��� ����Ű�� ������ 0���� ����. ���� 3��° ���� �ٲ۴�=+2
	//ptr[0]=*ptr=stu_numbers[0]=*(stu_numbers+0)

	ptr[50] = 1000;
	printf("\n%d\n", stu_numbers[50]);//�ٵ� 1000���� �ٲ�
	
	printf("[2]��°(����°)�� �����ϱ�\n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("\n%d\n", ptr[2]);

	//ptr�� ���� ����ų �� ������, 
	int my_nums[5] = { 50,60,70,80,90 };
	ptr = my_nums;
	printf("%d", ptr[2]);

	stu_numbers = my_nums;//stu_numbers�� ������ ����� �Ұ���









	return 0;
}