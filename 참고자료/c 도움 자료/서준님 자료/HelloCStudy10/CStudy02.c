#include <stdio.h>
void printMySelf()  //����
{
	printf("�ȳ��ϼ���\n");
	printf("�ȼ����Դϴ�\n");
	printf("�ݰ����ϴ�\n");
	printf("���� ���α׷��� �л��Դϴ�\n");

}
int MathPower(int num) { // ������ �����ε�, 0�̳� ������ �׳� 0 ��ȯ  //�Ű�����, ��ȯ�� ���� ��
	if (num <= 0)		 // ����
		return 0;

	return num * num;
}
char calcul() {  //��ȯ���� �ִµ� �Ű������� ������

	printf("ù ��° ���� �Է� : ");
	int num1;
	scanf_s("%d", &num1);

	printf("�� ��° ���� �Է� : ");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0) {
		return '-';
	}
	else if (result == 0) {
		return 0;
	}
	else
		return '+';
}
void calcul_sign(int num1, int num2) {  //��ȯ�� ���� �Ű������� ���� ��
	int result = num2 - num1;
	if (result < 0) {
		printf("��ȣ�� 0 �Դϴ�.\n");
	}
	else if (result == 0) {
		printf("��ȣ�� 0 �Դϴ�.\n");
	}
	else
		printf("��ȣ�� + �Դϴ�.\n");
}

int main() {  // Main /////////////////////////////////////////////////////

	printMySelf(); //ȣ��
	printf("------------------------\n");

	int result = MathPower(5);
	printf("5�� ������ %d�Դϴ�.\n", result);
	printf("3�� ������ %d�Դϴ�.\n", MathPower(3));
	result = MathPower(-7);
	printf("result - %d \n", result);

	printf("------------------------\n");

	char giho = calcul();
	printf("��ȣ�� %c�Դϴ�\n", giho);

	printf("------------------------\n");
	
	int n1, n2;
	printf("ù��°��? : ");
	scanf_s("%d", &n1);

	printf("�ι�°��? : ");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2); //n1, n2�޾Ƽ� ��� �� ���
	// calcul_sign(30, 30); �� �ص� ��

	printf("------------------------\n");


	return 0;
}