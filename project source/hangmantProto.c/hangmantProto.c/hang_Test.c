/**
* @autor Saroj Tripathi
* @name Hangman
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define WORDS 10 //�� �ܾ��� ����
#define WORDLEN 40 //�� �ܾ��� �ִ� ũ��
#define CHANCE 6 //�־����� ��ȸ

bool srand_called = false;
//bool �� ���� = true, false�� �������� ����.

int i_rnd(int i)  // WORDS 10<=����
{
	if (!srand_called)  // �� ������ ���� ���
	{
		srand(time(NULL) << 10); 
		srand_called = true;
	}
	return rand() % i; // 0~10���� �� ���� 1�� ���� ����.
}

char* decrypt(char* code) //��ȯ�� ���ڿ��� ���� ���� ����.
{
	int hash = ((strlen(code) - 3) / 3) + 2; //hash�� �ڵ��� ����-3 / 3 + 2
	//strlen = ����Ű�� �ּҺ��� NULL�� ���� �� ���� ������ ���� ī��Ʈ. 
	//
	char* decrypt = malloc(hash);
	char* toFree = decrypt;
	char* word = code;
	for (int ch = *code; ch != '\0'; ch = *(++code))
	{
		if ((code - word + 2) % 3 == 1) {
			*(decrypt++) = ch - (word - code + 1) - hash;
		}
	}
	*decrypt = '\0';
	return toFree;
}

void printBody(int mistakes, char* body) {
	printf("\tMistakes :%d\n", mistakes);
	switch (mistakes) {

	case 6: body[6] = '\\'; break;
	case 5: body[5] = '/'; break;
	case 4: body[4] = '\\'; break;
	case 3: body[3] = '|'; break;
	case 2: body[2] = '/'; break;
	case 1: body[1] = ')', body[0] = '('; break;
	default: break;

	}
	
	printf("\t _________\n"
		"\t|         |\n"
		"\t|        %c %c\n"
		"\t|        %c%c%c\n"
		"\t|        %c %c\n"
		"\t|             \n"
		"\t|             ", body[0], body[1], body[2],
		body[3], body[4], body[5], body[6]);
}

void printWord(char* guess, int len) {
	printf("\t");
	for (int i = 0; i < len; ++i)
	{
		printf("%c ", guess[i]);
	}
	printf("\n\n");
}

int main() {

	printf("\n\t ó�� ���� �ʰ� �����ϼ���!!.");

	printf("\n\n\t ��Ģ : ");
	printf("\n\t - 6�� �̻� Ʋ���� �ȵ˴ϴ�.");
	printf("\n\t - ��� ���ĺ��� �ҹ��ڷ� ����� �մϴ�.");
	printf("\n\t - Hint : �α��ִ� ����Ʈ �� �ϳ��Դϴ�. ex. Google");
	char values[WORDS][WORDLEN] = { "N~mqOlJ^tZletXodeYgs","gCnDIfFQe^CdP^^B{hZpeLA^hv","7urtrtwQv{dt`>^}FaR]i]XUug^GI",
									"aSwfXsxOsWAlXScVQmjAWJG","cruD=idduvUdr=gmcauCmg]","BQt`zncypFVjvIaTl]u=_?Aa}F",
									"iLvkKdT`yu~mWj[^gcO|","jSiLyzJ=vPmnv^`N]^>ViAC^z_","xo|RqqhO|nNstjmzfiuoiFfhwtdh~",
									"OHkttvxdp|[nnW]Drgaomdq" };
	char* body =malloc(CHANCE + 1);

	int id = i_rnd(WORDS); //i_rnd���� rand % 10 �ؼ� ���� ���� �� = id
	char* word = decrypt(values[id]);
	//���� ���� values�� ����=>�Էµ� ���ڿ� �� ���� ���� �ش��ϴ� ���ڿ��� decrypt�� ����.
	//decrypt=��ȣȭ ���� �ϴ� ����.
	int len = strlen(word);  //decrypt ������ ��ȭ ��ȣȭ(�ص�) �� �ܾ��� ���� ã��.
	char* guessed = malloc(len); // �ܾ��� ���� ��ŭ �Ҵ�.
	char falseWord[CHANCE]; //

	memset(body, ' ', CHANCE + 1);
	memset(guessed, '_', len);
	char guess;
	bool found;
	char* win;

	int mistakes = 0;
	setvbuf(stdin, NULL, _IONBF, 0);

	do {

		found = false;
		printf("\n\n");
		printBody(mistakes, body);
		printf("\n\n");
		printf("\t���� ��� : ");
		if (mistakes == 0) printf("\n");
		for (int i = 0; i < mistakes; ++i)
		{
			printf("%c", falseWord[i]);
		}
		printf("\n\n");
		printWord(guessed, len);
		printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
		do 
		{
			scanf_s("%c", &guess); 
		} while (getchar() != '\n');
		for (int i = 0; i < len; ++i)
		{
			if (word[i] == guess) {
				found = true;
				guessed[i] = guess;
			}
		}
		if (!found) {
			falseWord[mistakes] = guess;
			mistakes += 1;
		}
		win = strchr(guessed, '_');
		system("cls"); //system("cls"); �Լ� ��ġ üũ�ϱ�
	} while (mistakes < CHANCE && win != NULL);

	if (win == NULL) {
		printf("\n");
		printWord(guessed, len);
		printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word);
	}
	else {
		printf("\n");
		printBody(mistakes, body);
		printf("\n\n\tBetter try next time. Word was %s\n\n", word);
	}

	free(body);
	free(word);
	free(guessed);
	return EXIT_SUCCESS;
}