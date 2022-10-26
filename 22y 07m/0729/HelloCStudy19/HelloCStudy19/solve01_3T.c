#include<stdio.h>
#include"Mystructures.h" //내가 만든 헤더파일 불러오기

void printAnimal(Animal ani)
{
	printf("동물명    : %s\t", ani.name);
	printf("동물의 종 : %s\t", ani.species);
	printf("동물 코드 : %s\n", ani.code);
}
Food FoodTruck()
{
	Food f;
	printf("음식의 가격은?");
	scanf_s("%d", &f.price);
	printf("음식명?");
	rewind(stdin);
	gets(f.name);
	return f;
}
int main()
{
	Animal a1 = {"햄토리","뉴트리아","0001"};
	Animal a2 = { .name = "흰둥이",.species = "개",.code = "0002" };
	Animal a3;
	strcpy(a3.name, "피카츄");
	strcpy(a3.species, "쥐");
	strcpy(a3.code, "025");
	Animal a4;
	gets(a4.name);
	gets(a4.species);
	gets(a4.code);
	//gets만 쓸 때는 rewind(stdin);이 필요없다. scanf_s와 같이 쓸 때는 필요.
	printf("%s %s %s\n", a1.name, a1.species, a1.code);
	printf("%s %s %s\n", a2.name, a2.species, a2.code);
	printf("%s %s %s\n", a3.name, a3.species, a3.code);
	printf("%s %s %s\n", a4.name, a4.species, a4.code);

	Food f1 = { 5500,"학식" };
	Food f2 = { .price = 7000,.name = "일식" };
	Food f3;
	f3.price = 50000;
	strcpy(f3.name, "한식");
	Food f4;
	scanf_s("%d", &f4.price);
	rewind(stdin);
	gets(f4.name);
	printf("%s %d\n", f1.name, f1.price);
	printf("%s %d\n", f2.name, f2.price);
	printf("%s %d\n", f3.name, f3.price);
	printf("%s %d\n", f4.name, f4.price);

	printAnimal(a1);
	printAnimal(a2);
	printAnimal(a3);

	printf("푸드 트럭 가유\n");
	Food myfood = FoodTruck();
	printf("%s %d\n", myfood.name, myfood.price);
	return 0;
}
