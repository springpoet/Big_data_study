#include<stdio.h>

//1�� �Լ�
int Q_1(num11, num22, num33) {  
	printf("a b c : ");

	int sum = 0;
	for (int i = num11; i <= num22; i++) {
		if (i % num33 == 0)
			continue;
		sum += i;
	}
	return sum;
}

//2��
int Q_2() {  
	int sec;
	printf("�� ��? :");
	scanf_s("%d", &sec);
	if (sec > 3600) {
		printf("3600�ʸ� �ʰ��߽��ϴ�.\n");
	}
	else {
		printf("%d�� %d��\n", sec / 60, sec % 60);
	}
}

//  3��
void color() {		
	system("color 42");
}

//4��
void amuguna(char a, char b) {
	char color[9] = "color ";
	color[6] = a;
	color[7] = b;
	color[8] = NULL;  // ���ڿ��̶� null�� �������� ����
	system(color);
}

//5��
int Q_5() {
	int sum5 = 0;
	printf("1");
	for (int i = 2; i <= 100; i++) {
		printf("+%d", i);
		sum5 += i;
	}
	printf("\ntotal = %d �̴�\n", sum5 + 1);
}

//6��
int Q_6(int facto, int facto2) {
	for (int i = facto; i <= facto2 - 1; i++) {
		printf("%dx", i);
	}
	printf("%d\n", facto2);

	int sum6=1;
	for (int i = facto; i <= facto2; i++) {
		sum6 *= i;
	}
	printf("total = %d\n", sum6);
}

//7��
int Q_7() {
	int num1, num2;
	char sign;
	printf("����, ����, ���� �Է�(+ x X -) : ");
	scanf_s("%d %d %c", &num1, &num2, &sign, 1);

	int sum77 = 0;
	int sum88 = 1;

	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	switch (sign)
	{
	case '+':
		for (int i = num1; i <= num2; i++) {
			sum77 += i;
		}
		printf("%d\n", sum77);
		break;
	case 'x':
	case 'X':
		for (int i = num1; i <= num2; i++) {
			sum88 *= i;
		}
		printf("%d\n", sum88);
		break;
	default:
		printf("����ó��\n");
		break;
	}
}

//8��
int Q_8() {
	printf("1���� ����� ��? : ");
	int factory;
	scanf_s("%d", &factory);

	printf("1x");
	for (int i = 2; i <= factory - 1; i++) {
		printf("%dx", i);
	}
	printf("%d\n", factory);

	int sum8 = 1;
	for (int i = 1; i <= factory; i++) {
		sum8 *= i;
	}
	printf("total = %d\n", sum8);
}

//9��
int Q_9(int factory) {
	if (factory == 1) {
		return 1;
	}
	else {
		return factory * Q_9(factory - 1);
	}
}

//10�� �Ǻ���ġ
int fn(int n) {    
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fn(n - 1) + fn(n - 2);
}


int main() {  // main ///////////////////////////////////

	printf("a b c : ");
	int num11, num22, num33;
	scanf_s("%d %d %d", &num11, &num22, &num33);
	int sum = Q_1(num11, num22, num33); // a b c �� �Է�
	printf("%d\n", sum);

	printf("-----------------------------\n");

	//2��
	Q_2();
	printf("-----------------------------\n");

	//3��
	color();
	printf("3��\n");   // color 42 �� �ٷ� ����Ǿ ���� 4������ �ٷ� �Ѿ
	printf("-----------------------------\n");

	//4��
	printf("���� 4��\n");
	amuguna('f', '5');  // color f5 �� �ٷ� ����Ǽ� ���� 5������ �Ѿ
	printf("-----------------------------\n");

	//5��
	Q_5();
	printf("-----------------------------\n");

	//6��
	printf("�����? : ");
	int facto;
	scanf_s("%d", &facto);

	printf("���°����? : ");
	int facto2;
	scanf_s("%d", &facto2);

	Q_6(facto, facto2);

	printf("-----------------------------\n");

	//7��
	
	Q_7();
	printf("-----------------------------\n");
	
	//8��
	Q_8();
	printf("-----------------------------\n");

	//9��
	int factory;
	printf("1���� ����� ��? : ");
	scanf_s("%d", &factory);
	int result = Q_9(factory);
	printf("����Լ� �� : %d\n", result);

	printf("-----------------------------\n");

	//10�� 
	printf("�Ǻ���ġ %d", fn(8));

	return 0;
}