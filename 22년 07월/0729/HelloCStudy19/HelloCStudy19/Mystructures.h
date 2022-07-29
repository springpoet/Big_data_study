#pragma once
//동물병원=이름, 종류, 고유 코드(=학번 같은 것)
struct Animal
{
	char name[100];
	char species[100];
	char code[100]; //코드가 00007 같은 형태라면 문자열로 저장해야함.
					//int로 받으면 7로 출력하기 때문.
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