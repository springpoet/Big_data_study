
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define WORDS 10 
#define WORDLEN 30 
#define CHANCE 6 

bool srand_called = false;

int i_rnd(int i)
{
	if (!srand_called)
	{
		srand(time(NULL));
		srand_called = true;
	}
	return rand() % i;
}


void printBody(int mistakes, char* body)
{
	printf("\tMistakes :%d\n", mistakes);
	switch (mistakes)
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

	printf("\t _________\n"
		"\t|         |\n"
		"\t|        %c %c\n"
		"\t|        %c%c%c\n"
		"\t|        %c %c\n"
		"\t|             \n"
		"\t|             ", body[0], body[1], body[2],
		body[3], body[4], body[5], body[6]);
}

void printWord(char* guess, int len)
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
	printf("\n\t 처형 되지 않게 조심하세요!!.");
	printf("\n\n\t 규칙 : ");
	printf("\n\t - 6번 이상 틀리면 안됩니다.");
	printf("\n\t - 모든 알파벳은 소문자로 적어야 합니다.");
	printf("\n\t - 카테고리");
	printf("\n\t\t1. 사이트");
	printf("\n\t\t2. 나라");
	printf("\n\t\t3. 과일 이름");
	printf("\n\n\t 선택하세요. : ");
	scanf_s("%d", &n);
	return n;
}

int que_answer(char values[][WORDLEN])
{
	char* body = malloc(CHANCE + 1);
	int id = i_rnd(WORDS);
	char* word = values[id];
	int len = strlen(word);
	char* guessed = malloc(len); //len 만큼 할당된 지점의 주소 값
	char falseWord[CHANCE];

	memset(body, ' ', CHANCE + 1);
	memset(guessed, '_', len);
	char guess;
	bool found;
	char* win;

	int mistakes = 0;
	do
	{

		found = false; // 카테고리 선택 후 초기화면, 정답을 찾기 전이므로 false로 시작.
		printf("\n\n");
		printBody(mistakes, body);  // 단두대 그림 초기화면
		printf("\n\n");
		printf("\t실패 기록 : ");

		if (mistakes == 0)
		{
			printf("\n");
		}

		//틀리게 쓴 문자를 실패 기록 : 뒤에 적어 주는 반복문.
		for (int i = 0; i < mistakes; ++i)
		{
			printf("%c", falseWord[i]);
		}

		printf("\n\n");
		printWord(guessed, len); // 랜덤 난수로 선택 된 단어길이 만큼 "_" 모양이 동적 할당 된 모양
		printf("\t소문자 알파벳을 입력하세요. : ");
		// 여기까지가 초기 화면
		do
		{
			scanf_s("%c", &guess); //입력하세요 : 뒤에 입력받을 문자
		} while (getchar() != '\n'); //입력받은 문자가 스페이스바가 아닐 때 까지 실행


		//입력한 문자가 정답과 일치하는 문자가 있을 경우 그 문자로 바꿔 줌
		for (int i = 0; i < len; ++i)
		{
			if (word[i] == guess)
			{
				found = true;//정답과 일치하는 문자가 있다!
				guessed[i] = guess;
			}
		}
		if (!found)
			//경우1 : 위 for문에서 true로 바뀐 경우, 
			//경우2 : 위 for문에서 정답이 없어서 false 그대로 나온 경우
			//경우 1 : found=true, 경우2 : found = false
			//경우 1: !found=false, 경우2 : !found = true
		{
			//정답과 일치하는 문자가 없다
			falseWord[mistakes] = guess;
			// 실패 기록(falseWord 배열)의 번호에 입력한 문자(guess)를 입력
			mistakes += 1; //틀렸으니 mistake에 ++하기.
		}
		win = strchr(guessed, '_');
		//strchr=문자열 내에 일치하는 문자가 있는 지 검사하는 함수
		//내가 쓴 문자열에 "_"이 있는지 검사함.
		system("cls");
	} while (mistakes < CHANCE && win != NULL);
	//틀린 횟수가 CHANCE(6)보다 작으면서, 
	//내가 적은 문자열에 "_"가 없을 때(NULL) 때까지 실행

	//내가 적은 문자열에 _가 없다 = 승리
	if (win == NULL)
	{
		printf("\n");
		printWord(guessed, len);
		printf("\n\t축하합니다! 한 사람을 구했습니다. : %s\n\n", word);
	}
	//그 외의 경우(6번이상 적거나 NULL이 있는 경우)
	else
	{
		printf("\n");
		printBody(mistakes, body); //body가 6까지 누적된 모습을 출력
		printf("\n\n\t다음 기회에! 정답은 : %s\n\n", word);
	}

	free(body); //동적 할당 제거
	free(guessed);
	return EXIT_SUCCESS;
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
		printf("\n\t - 인기있는 사이트 중 하나입니다. ex. Google");
		rewind(stdin);
		que_answer(values);
	case 2:
		printf("\n");
		char values2[WORDS][WORDLEN] = { "china","india","unitedstatesofameria","indonesia","brazil","japan",
			"korea","vietnam","turkey","germany" };
		system("cls");
		printf("\n\t - 국가명 중 하나입니다. ex. korea");
		rewind(stdin);
		que_answer(values);
		break;
	case 3:
		printf("\n");
		char values3[WORDS][WORDLEN] = { "orange","mango","watermelon",
			"peach","banana","melon","apple","dragonfruit","grape","strawberry" };
		system("cls");
		printf("\n\t -과일 이름 중 하나입니다. ex. orange");
		rewind(stdin);
		que_answer(values);
		break;
	default:
		break;
	}
	return EXIT_SUCCESS;
}



//	char* body = malloc(CHANCE + 1);
//	int id = i_rnd(WORDS);
//	char* word = values[id];
//	int len = strlen(word);
//	char* guessed = malloc(len); //len 만큼 할당된 지점의 주소 값
//	char falseWord[CHANCE];

//	memset(body, ' ', CHANCE + 1);
//	memset(guessed, '_', len);
//	char guess;
//	bool found;
//	char* win;

//	int mistakes = 0;
//	rewind(stdin);

//	do
//	{

//		found = false; // 카테고리 선택 후 초기화면, 정답을 찾기 전이므로 false로 시작.
//		printf("\n\n");
//		printBody(mistakes, body);  // 단두대 그림 초기화면
//		printf("\n\n");
//		printf("\t실패 기록 : "); 

//		if (mistakes == 0) 
//		{
//			printf("\n");
//		}
//		
//		//틀리게 쓴 문자를 실패 기록 : 뒤에 적어 주는 반복문.
//		for (int i = 0; i < mistakes; ++i)
//		{
//			printf("%c", falseWord[i]); 
//		}
//		
//		printf("\n\n");
//		printWord(guessed, len); // 랜덤 난수로 선택 된 단어길이 만큼 "_" 모양이 동적 할당 된 모양
//		printf("\t소문자 알파벳을 입력하세요. : ");
//		// 여기까지가 초기 화면
//		do
//		{
//			scanf_s("%c", &guess); //입력하세요 : 뒤에 입력받을 문자
//		} while (getchar() != '\n'); //입력받은 문자가 스페이스바가 아닐 때 까지 실행


//		//입력한 문자가 정답과 일치하는 문자가 있을 경우 그 문자로 바꿔 줌
//		for (int i = 0; i < len; ++i) 
//		{
//			if (word[i] == guess)
//			{
//				found = true;//정답과 일치하는 문자가 있다!
//				guessed[i] = guess;
//			}
//		}
//		if (!found) 
//			//경우1 : 위 for문에서 true로 바뀐 경우, 
//			//경우2 : 위 for문에서 정답이 없어서 false 그대로 나온 경우
//			//경우 1 : found=true, 경우2 : found = false
//			//경우 1: !found=false, 경우2 : !found = true
//		{
//			//정답과 일치하는 문자가 없다
//			falseWord[mistakes] = guess; 
//			// 실패 기록(falseWord 배열)의 번호에 입력한 문자(guess)를 입력
//			mistakes += 1; //틀렸으니 mistake에 ++하기.
//		}
//		win = strchr(guessed, '_'); 
//		//strchr=문자열 내에 일치하는 문자가 있는 지 검사하는 함수
//		//내가 쓴 문자열에 "_"이 있는지 검사함.
//		system("cls");
//	} while (mistakes < CHANCE && win != NULL);
//	//틀린 횟수가 CHANCE(6)보다 작으면서, 
//	//내가 적은 문자열에 "_"가 없을 때(NULL) 때까지 실행
//	
//	//내가 적은 문자열에 _가 없다 = 승리
//	if (win == NULL)
//	{
//		printf("\n");
//		printWord(guessed, len);
//		printf("\n\t축하합니다! 한 사람을 구했습니다. : %s\n\n", word);
//	}
//	//그 외의 경우(6번이상 적거나 NULL이 있는 경우)
//	else
//	{
//		printf("\n");
//		printBody(mistakes, body); //body가 6까지 누적된 모습을 출력
//		printf("\n\n\t다음 기회에! 정답은 : %s\n\n", word);
//	}

//	free(body); //동적 할당 제거
//	free(guessed);
//	break;
//case 2:
//	printf("\n");
//	char values2[WORDS][WORDLEN] = { "china","india","unitedstatesofameria","indonesia","brazil","japan",
//		"korea","vietnam","turkey","germany" };
//	system("cls");
//	printf("\n\t - 국가명 중 하나입니다. ex. korea");
//	char* body2 = malloc(CHANCE + 1);
//	int id2 = i_rnd(WORDS);
//	char* word2 = values2[id2];
//	int len2 = strlen(word2);
//	char* guessed2 = malloc(len2);
//	char falseWord2[CHANCE];

//	memset(body2, ' ', CHANCE + 1);
//	memset(guessed2, '_', len2);
//	char guess2;
//	bool found2;
//	char* win2;

//	int mistakes2 = 0;
//	rewind(stdin);
//	do
//	{

//		found2 = false;
//		printf("\n\n");
//		printBody(mistakes2, body2);
//		printf("\n\n");
//		printf("\t실패 기록 : ");
//		if (mistakes2 == 0) printf("\n");
//		for (int i = 0; i < mistakes2; ++i)
//		{
//			printf("%c", falseWord2[i]);
//		}
//		printf("\n\n");
//		printWord(guessed2, len2);
//		printf("\t소문자 알파벳을 입력하세요. : ");
//		do
//		{
//			scanf_s("%c", &guess2);
//		} while (getchar() != '\n');
//		for (int i = 0; i < len2; ++i)
//		{
//			if (word2[i] == guess2)
//			{
//				found2 = true;
//				guessed2[i] = guess2;
//			}
//		}
//		if (!found2)
//		{
//			falseWord2[mistakes2] = guess2;
//			mistakes2 += 1;
//		}
//		win2 = strchr(guessed2, '_');
//		system("cls");
//	} while (mistakes2 < CHANCE && win2 != NULL);

//	if (win2 == NULL)
//	{
//		printf("\n");
//		printWord(guessed2, len2);
//		printf("\n\t축하합니다! 한 사람을 구했습니다. : %s\n\n", word2);
//	}
//	else
//	{
//		printf("\n");
//		printBody(mistakes2, body2);
//		printf("\n\n\t다음 기회에! 정답은 : %s\n\n", word2);
//	}

//	free(body2);
//	free(guessed2);
//	break;
//case 3:
//	printf("\n");
//	char values3[WORDS][WORDLEN] = { "orange","mango","watermelon",
//		"peach","banana","melon","apple","dragonfruit","grape","strawberry" };
//	system("cls");
//	printf("\n\t -과일 이름 중 하나입니다. ex. orange");
//	char* body3 = malloc(CHANCE + 1);
//	int id3 = i_rnd(WORDS);
//	char* word3 = values3[id3];
//	int len3 = strlen(word3);
//	char* guessed3 = malloc(len3);
//	char falseWord3[CHANCE];

//	memset(body3, ' ', CHANCE + 1);
//	memset(guessed3, '_', len3);
//	char guess3;
//	bool found3;
//	char* win3;

//	int mistakes3 = 0;
//	setvbuf(stdin, NULL, _IONBF, 0);

//	do
//	{

//		found3 = false;
//		printf("\n\n");
//		printBody(mistakes3, body3);
//		printf("\n\n");
//		printf("\t실패 기록 : ");
//		if (mistakes3 == 0) printf("\n");
//		for (int i = 0; i < mistakes3; ++i)
//		{
//			printf("%c", falseWord3[i]);
//		}
//		printf("\n\n");
//		printWord(guessed3, len3);
//		printf("\t소문자 알파벳을 입력하세요. : ");
//		do
//		{
//			scanf_s("%c", &guess3);
//		} while (getchar() != '\n');
//		for (int i = 0; i < len3; ++i)
//		{
//			if (word3[i] == guess3)
//			{
//				found3 = true;
//				guessed3[i] = guess3;
//			}
//		}
//		if (!found3)
//		{
//			falseWord3[mistakes3] = guess3;
//			mistakes3 += 1;
//		}
//		win3 = strchr(guessed3, '_');
//		system("cls");
//	} while (mistakes3 < CHANCE && win3 != NULL);

//	if (win3 == NULL)
//	{
//		printf("\n");
//		printWord(guessed3, len3);
//		printf("\n\t축하합니다! 한 사람을 구했습니다. : %s\n\n", word3);
//	}
//	else
//	{
//		printf("\n");
//		printBody(mistakes3, body3);
//		printf("\n\n\t다음 기회에! 정답은 : %s\n\n", word3);
//	}

//	free(body3);
//	free(guessed3);
//	break;
//default:
//	break;
//}
