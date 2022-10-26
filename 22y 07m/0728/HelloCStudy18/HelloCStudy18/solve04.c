#include<stdio.h>
struct grade
{
	char name[20];
	int subject;
	int score;
}typedef grade;
int main()
{
	
	//1번.
	struct game2D
	{
		char name[20];
		int x;
		int y;
	}typedef game2D;

	//그냥 출력.
	game2D q1_1 = { .name = "김성근", .x = 49, .y = 51 };
	game2D q1_2 = { .name = "외부인",.x = 12,.y = 101 };
	printf("%s의 x 좌표 : %d, y 좌표 : %d\n", q1_1.name ,q1_1.x, q1_1.y);
	printf("%s의 x 좌표 : %d, y 좌표 : %d\n", q1_2.name,q1_2.x, q1_2.y);

	//입력 받고 출력.
	game2D q1[2];
	for (int i = 0; i < 2; i++)
	{
		printf("닉네임 입력해라 : ");
		rewind(stdin);
		gets(q1[i].name);
		printf("x 좌표와 y 좌표 입력 : ");
		scanf_s("%d %d", &q1[i].x, &q1[i].y);
	}
	for (int i = 0; i < 2; i++)
	{
		printf("%s의 x좌표 : % d, y좌표 : % d\n", q1[i].name, q1[i].x, q1[i].y);
	}


	//2번.
	struct game3D
	{
		char name[20];
		int x;
		int y;
		int z;
	}typedef game3D;

	//그냥 출력.
	game3D q2_1 = { .name="김성근",.x = 21, .y = 24, .z = 91};
	game3D q2_2 = { .name="외부인",.x = 46,.y = 152, .z = 53};
	printf("%s의 x 좌표 : %d, y 좌표 : %d, z 좌표 : %d\n", q2_1.name, q2_1.x, q2_1.y, q2_2.z);
	printf("%s의 x 좌표 : %d, y 좌표 : %d, z 좌표 : %d\n", q2_2.name, q2_2.x, q2_2.y, q2_2.z);

	//입력 후 출력.
	game3D q2[2];
	for (int i = 0; i < 2; i++)
	{
		printf("닉네임 입력 : ");
		rewind(stdin);
		gets(q2[i].name);
		printf("x 좌표와 y 좌표 z좌표 입력 : ");
		scanf_s("%d %d %d", &q2[i].x, &q2[i].y, &q2[i].z);
	}
	for (int i = 0; i < 2; i++)
	{
		rewind(stdin);
		printf("%s의 x좌표 : % d, y좌표 : %d, z좌표 : %d\n", q2[i].name,q2[i].x, q2[i].y, q2[i].z);
	}

	//3번.
	struct hospital
	{
		char animal[100];
	}typedef hospital;
	hospital q3_1 = { .animal = "나바아아앙" };
	hospital q3_2 = { .animal = "곰방와" };
	printf("동물병원에 %s가 있다.\n", q3_1.animal);
	printf("동물병원에 %s가 있다.\n", q3_2.animal);
	hospital q3[3];
	for (int i = 0; i < 3; i++)
	{
		printf("무슨 동물있니? : ");
		gets(q3[i].animal);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("우리 병원에는 %s(이)가 있습니다.\n", q3[i].animal);
	}

	//4번.
	struct address
	{
		char name[20];
		char si[20];
		char gu[20];
	}typedef address;

	//바로 출력.
	address q4_1 = {.name="김성근",.si = "대구광역시",.gu = "수성구"};
	address q4_2 = {.name="몰라용",.si = "서울특별시",.gu = "관악구"};
	printf("%s(은)는 %s, %s에 살고 있다.\n", q4_1.name, q4_1.si, q4_1.gu);
	printf("%s(은)는 %s, %s에 살고 있다.\n", q4_2.name, q4_2.si, q4_2.gu);
	
	//입력 후 출력.
	address q4[3];
	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하세요. : ");
		rewind(stdin);
		gets(q4[i].name);
		printf("시를 입력하세요 : ");
		rewind(stdin);
		gets(q4[i].si);
		printf("구를 입력하세요 : ");
		rewind(stdin);
		gets(q4[i].gu);
	
	}
	for (int i = 0; i < 3; i++)
	{
		rewind(stdin);
		printf("%s(이)가 사는 곳은 %s %s입니다.\n", q4[i].name, q4[i].si, q4[i].gu);
	}
	return 0;
}