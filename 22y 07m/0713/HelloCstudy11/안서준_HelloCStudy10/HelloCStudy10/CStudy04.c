#include<stdio.h>
int g = 0;  //���� ����


void up1(int l){  //���������� �Ű�
	l++;
}

void up2(int* l) { //���������� ��ġ(������)�� �Ű�
	
	(*l)++;
}

//���������� ����
void up3() {
	g++;
}

int main() {
	int local = 10;
	up1(local);  //local�� ���� �ѱ�
	printf("local = %d \n", local);
	
	up2(&local); //local�� �ּҸ� �ѱ�
	printf("local = %d \n", local);

	up3(g);
	printf("g = %d \n", g);  
}