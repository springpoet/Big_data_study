#include<stdio.h>
int main()
{
	//int main():f()=0
	//scanf�� printf �� �Լ�.
	
	//c : �Լ�: function -���, C#, Jave:�޼ҵ� method - ���
	/*��ȯ���� �Ű������� ���� �Լ�
		void printfMySelf()
	{
		printf("Hello");
	}*/
	int result = printf("Hello");
	printf("%\n%d\n", result);
	//printf�� Byte�� ����ϴ� �Լ�	
	int n, m;
	int a = scanf_s("%d", &n);
	//scanf�� �� �Է¹޴� ���.(�Ű� ������ �Է�, �Է¹��� ������ ���� ��ȯ)
	int b = scanf_s("%d %d", &n, &m);
	result = printf("%d %d", n, m);
	printf("\nresult=%d, a=%d, b=%d\n", result,a,b);
	
	return 0;
}