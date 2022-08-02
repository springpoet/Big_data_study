/**
* @autor Saroj Tripathi
* @name Hangman
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define WORDS 10 //총 단어의 갯수
#define WORDLEN 40 //각 단어의 최대 크기
#define CHANCE 6 //주어지는 기회

bool srand_called = false;
//bool 논리 형식 = true, false로 정해지는 형식.

int i_rnd(int i)  // WORDS 10<=대입
{
	if (!srand_called)  // 논리 형식이 참일 경우
	{
		srand(time(NULL) << 10); 
		srand_called = true;
	}
	return rand() % i; // 0~10까지 중 랜덤 1개 숫자 뽑음.
}

char* decrypt(char* code) //소환된 문자열의 값에 직접 접근.
{
	int hash = ((strlen(code) - 3) / 3) + 2; //hash는 코드의 길이-3 / 3 + 2
	//strlen = 가리키는 주소부터 NULL이 나올 때 까지 문자의 갯수 카운트. 
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

	printf("\n\t 처형 되지 않게 조심하세요!!.");

	printf("\n\n\t 규칙 : ");
	printf("\n\t - 6번 이상 틀리면 안됩니다.");
	printf("\n\t - 모든 알파벳은 소문자로 적어야 합니다.");
	printf("\n\t - Hint : 인기있는 사이트 중 하나입니다. ex. Google");
	char values[WORDS][WORDLEN] = { "N~mqOlJ^tZletXodeYgs","gCnDIfFQe^CdP^^B{hZpeLA^hv","7urtrtwQv{dt`>^}FaR]i]XUug^GI",
									"aSwfXsxOsWAlXScVQmjAWJG","cruD=idduvUdr=gmcauCmg]","BQt`zncypFVjvIaTl]u=_?Aa}F",
									"iLvkKdT`yu~mWj[^gcO|","jSiLyzJ=vPmnv^`N]^>ViAC^z_","xo|RqqhO|nNstjmzfiuoiFfhwtdh~",
									"OHkttvxdp|[nnW]Drgaomdq" };
	char* body =malloc(CHANCE + 1);

	int id = i_rnd(WORDS); //i_rnd에서 rand % 10 해서 나온 랜덤 수 = id
	char* word = decrypt(values[id]);
	//랜덤 수를 values에 대입=>입력된 문자열 중 랜덤 수에 해당하는 문자열을 decrypt에 대입.
	//decrypt=암호화 해제 하는 과정.
	int len = strlen(word);  //decrypt 과정을 통화 복호화(해독) 된 단어의 길이 찾기.
	char* guessed = malloc(len); // 단어의 길이 만큼 할당.
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
		printf("\t실패 기록 : ");
		if (mistakes == 0) printf("\n");
		for (int i = 0; i < mistakes; ++i)
		{
			printf("%c", falseWord[i]);
		}
		printf("\n\n");
		printWord(guessed, len);
		printf("\t소문자 알파벳을 입력하세요. : ");
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
		system("cls"); //system("cls"); 함수 위치 체크하기
	} while (mistakes < CHANCE && win != NULL);

	if (win == NULL) {
		printf("\n");
		printWord(guessed, len);
		printf("\n\t축하합니다! 한 사람을 구했습니다. : %s\n\n", word);
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