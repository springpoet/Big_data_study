#pragma once
//��������=�̸�, ����, ���� �ڵ�(=�й� ���� ��)
struct Animal
{
	char name[100];
	char species[100];
	char code[100]; //�ڵ尡 00007 ���� ���¶�� ���ڿ��� �����ؾ���.
					//int�� ������ 7�� ����ϱ� ����.
}typedef Animal;

struct Food
{
	int price;
	char name[100];
}typedef Food;

struct StudentScore
{
	int kor;
	int eng;
	int math;
}typedef StudentScore;

struct KBStudent
{
	int cScore;
	int javaScore;
	char name[100];
}typedef KBStudent;