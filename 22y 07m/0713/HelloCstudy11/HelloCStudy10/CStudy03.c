#include<stdio.h>
#include"mytest.h"
#include"yourtest.h"

void test();  //���� (��ȯ�� �Ű����� ����)

int main() {

	test();
	mytest(); 
	yourtypeTest(10);
}


void test() {  //����
	printf("�Լ� �׽�Ʈ\n");
}