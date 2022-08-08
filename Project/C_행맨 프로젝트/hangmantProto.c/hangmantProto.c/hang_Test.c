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
#define WORDLEN 30 //�� �ܾ��� �ִ� ũ��
#define CHANCE 6 //�־����� ��ȸ

bool srand_called = false;
//bool �� ���� = true, false�� �������� ����.

int i_rnd(int i)  // WORDS 10 <= ����
{
	if (!srand_called)  // �� ������ ���� ���
	{
		srand(time(NULL));
		srand_called = true;
	}
	return rand() % i; // 0~10���� �� ���� 1�� ���� ����.
}


void printBody(int mistakes, char* body) //
{
	printf("\tMistakes :%d\n", mistakes); // Ʋ���� �Է� �� ���
	switch (mistakes) // Ʋ�� Ƚ���� + �ɼ��� �ϳ��� �߰�
	{

	case 6:
		body[6] = '\\';
		break;
	case 5:
		body[5] = '/';
		break;
	case 4:
		body[4] = '\\';
		break;
	case 3:
		body[3] = '|';
		break;
	case 2:
		body[2] = '/';
		break;
	case 1:
		body[1] = ')', body[0] = '(';
		break;
	default:
		break;
	}

	// �⺻���� ��µǴ� �ܵδ� ���
	printf("\t _________\n"
		"\t|         |\n"
		"\t|        %c %c\n"
		"\t|        %c%c%c\n"
		"\t|        %c %c\n"
		"\t|             \n"
		"\t|             ", body[0], body[1], body[2],
		body[3], body[4], body[5], body[6]);
}

void printWord(char* guess, int len)  // �츮�� ������ �ܾ ����ϴ� �Լ�
{
	printf("\t");
	for (int i = 0; i < len; ++i)
	{
		printf("%c ", guess[i]);
	}
	printf("\n\n");
}

int login()
{
	int n;
	printf("\n\t ó�� ���� �ʰ� �����ϼ���!!.");
	printf("\n\n\t ��Ģ : ");
	printf("\n\t - 6�� �̻� Ʋ���� �ȵ˴ϴ�.");
	printf("\n\t - ��� ���ĺ��� �ҹ��ڷ� ����� �մϴ�.");
	printf("\n\t - ī�װ�");
	printf("\n\t\t1. ���� �̸�");
	printf("\n\t\t2. �α��ִ� ����Ʈ");
	printf("\n\t\t3. ���� �̸�");
	printf("\n\n\t �����ϼ���. : ");
	scanf_s("%d", &n);
	return n;
}

int main()
{
	switch (login())
	{
	case 1:
		printf("\n");
		char values[WORDS][WORDLEN] = { "google", "naver", "youtube", "github",
			"facebook","coupang","namuwiki","tistory","daum","instagram" };
		system("cls");
		printf("\n\t - �α��ִ� ����Ʈ �� �ϳ��Դϴ�. ex. Google");
		char* body = malloc(CHANCE + 1);
		int id = i_rnd(WORDS); 
		char* word = values[id];

		int len = strlen(word); 
		char* guessed = malloc(len);
		char falseWord[CHANCE];

		memset(body, ' ', CHANCE + 1);
		memset(guessed, '_', len);
		char guess;
		bool found;
		char* win;

		int mistakes = 0;
		setvbuf(stdin, NULL, _IONBF, 0);

		do
		{

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
				if (word[i] == guess)
				{
					found = true;
					guessed[i] = guess;
				}
			}
			if (!found)
			{
				falseWord[mistakes] = guess;
				mistakes += 1;
			}
			win = strchr(guessed, '_');
			system("cls"); 
		} while (mistakes < CHANCE && win != NULL);

		if (win == NULL)
		{
			printf("\n");
			printWord(guessed, len);
			printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word);
		}
		else
		{
			printf("\n");
			printBody(mistakes, body);
			printf("\n\n\tBetter try next time. Word was %s\n\n", word);
		}

		free(body);
		free(guessed);
		break;
	case 2:
		printf("\n");
		char values2[WORDS][WORDLEN] = { "china","india","united states of ameria","indonesia","brazil","japan",
			"korea","vietnam","turkey","germany" };
		system("cls");
		printf("\n\t - ������ �� �ϳ��Դϴ�. ex. korea");
		char* body2 = malloc(CHANCE + 1);
		int id2 = i_rnd(WORDS); 
		char* word2 = values2[id2];
		int len2 = strlen(word2); 
		char* guessed2 = malloc(len2); 
		char falseWord2[CHANCE]; 

		memset(body2, ' ', CHANCE + 1);
		memset(guessed2, '_', len2);
		char guess2;
		bool found2;
		char* win2;

		int mistakes2 = 0;
		setvbuf(stdin, NULL, _IONBF, 0);

		do
		{

			found2 = false;
			printf("\n\n");
			printBody(mistakes2, body2);
			printf("\n\n");
			printf("\t���� ��� : ");
			if (mistakes2 == 0) printf("\n");
			for (int i = 0; i < mistakes2; ++i)
			{
				printf("%c", falseWord2[i]);
			}
			printf("\n\n");
			printWord(guessed2, len2);
			printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
			do
			{
				scanf_s("%c", &guess2);
			} while (getchar() != '\n');
			for (int i = 0; i < len2; ++i)
			{
				if (word2[i] == guess2)
				{
					found2 = true;
					guessed2[i] = guess2;
				}
			}
			if (!found2)
			{
				falseWord2[mistakes2] = guess2;
				mistakes2 += 1;
			}
			win2 = strchr(guessed2, '_');
			system("cls"); 
		} while (mistakes2 < CHANCE && win2 != NULL);

		if (win2 == NULL)
		{
			printf("\n");
			printWord(guessed2, len2);
			printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word2);
		}
		else
		{
			printf("\n");
			printBody(mistakes2, body2);
			printf("\n\n\tBetter try next time. Word was %s\n\n", word2);
		}

		free(body2);
		free(guessed2);
		break;
	case 3:
		printf("\n");
		char values3[WORDS][WORDLEN] = { "orange","mango","watermelon",
			"peach","banana","melon","apple","dragon fruit","grape","strawberry" };
		system("cls");
		printf("\n\t -���� �̸� �� �ϳ��Դϴ�. ex. orange");
		char* body3 = malloc(CHANCE + 1);
		int id3 = i_rnd(WORDS); 
		char* word3 = values3[id3];
		int len3 = strlen(word3);  
		char* guessed3 = malloc(len3); 
		char falseWord3[CHANCE]; 

		memset(body3, ' ', CHANCE + 1);
		memset(guessed3, '_', len3);
		char guess3;
		bool found3;
		char* win3;

		int mistakes3 = 0;
		setvbuf(stdin, NULL, _IONBF, 0);

		do
		{

			found3 = false;
			printf("\n\n");
			printBody(mistakes3, body3);
			printf("\n\n");
			printf("\t���� ��� : ");
			if (mistakes3 == 0) printf("\n");
			for (int i = 0; i < mistakes3; ++i)
			{
				printf("%c", falseWord3[i]);
			}
			printf("\n\n");
			printWord(guessed3, len3);
			printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
			do
			{
				scanf_s("%c", &guess3);
			} while (getchar() != '\n');
			for (int i = 0; i < len3; ++i)
			{
				if (word3[i] == guess3)
				{
					found3 = true;
					guessed3[i] = guess3;
				}
			}
			if (!found3)
			{
				falseWord3[mistakes3] = guess3;
				mistakes3 += 1;
			}
			win3 = strchr(guessed3, '_');
			system("cls");
		} while (mistakes3 < CHANCE && win3 != NULL);

		if (win3 == NULL)
		{
			printf("\n");
			printWord(guessed3, len3);
			printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word3);
		}
		else
		{
			printf("\n");
			printBody(mistakes3, body3);
			printf("\n\n\tBetter try next time. Word was %s\n\n", word3);
		}

		free(body3);
		free(guessed3);
		break;
	default:
		break;
	}

	return EXIT_SUCCESS;
}
