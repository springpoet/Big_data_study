#include<stdio.h>
#include<stdlib.h>
int main()
{
	//4.
	//2������ x,b�� ���� �޾ұ� ������ a�� �ʱ�ȭ �� ����
	int x, b;
	printf("x�� b��?\n");
	scanf_s("%d %d", &x, &b);

	int a;
	printf("a��?");
	scanf_s("%d", &a);

	//(x+a)(x+b)=x^2+(a+b)+(a*b)
	printf("(%d+%d)(%d+%d)=%d\n", x, a, x, b, (x + a)* (x + b));
	printf("x^2+(a+b)x+(a*b)=%d\n", (x * x) + ((a + b) * x) + (a * b));

	/*5-1 %, / ���
	1)10���� ���� ������=1���ڸ�
	2)10���� ���� �� ������ �� ���ϱ�
	3)100���� ���� ��*/
	printf("ù��°�� �ι�° ���ڸ� �Է��ϼ���.");
	int num1, num2;
	scanf_s("%d,%d", &num1, &num2);
	//scanf_s���� ���⸦ �̿��ؼ� ������ �Է� ����������, �޸��� �̿��ص� �ȴ�.

	printf("1.%d\n", num1 * (num2 % 10));//472&5
	printf("2.%d\n", num1 * ((num2 / 10) % 10));//472&8
	printf("3.%d\n", num1 * (num2 / 100));//472*3
	printf("4.%d\n", num1 * num2);

	//5-2 �ƽ�Ű�ڵ� �̿�
	printf("�ι�° ���ڸ� �ٽ� �Է��غ���.");
	char number[4];//[4]�̻����� �ƹ��ų� ����
	rewind(stdin);
	gets(number);//385�� ���ڰ� �ƴ϶� ���� 3, 8, 5�� �Է��Ѱ�
	
	printf("%d\n"), number[0]);
	printf("%d\n"), number[0]);


	printf("1.%d\n2.%d\n3.%d\n4.%d\n", 
		num1*(number[2]-'0'),
		num1*(number[1]-'0'),
		num1*(number[0]-'0'),
		num1* atoi(number));
	//atoi �Է��� �ȵɽ� ����� #include<stdlib.h> �߰�
	//f5�� ����� ����
	return 0;
}