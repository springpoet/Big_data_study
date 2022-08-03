
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
	printf("\n\t ó�� ���� �ʰ� �����ϼ���!!.");
	printf("\n\n\t ��Ģ : ");
	printf("\n\t - 6�� �̻� Ʋ���� �ȵ˴ϴ�.");
	printf("\n\t - ��� ���ĺ��� �ҹ��ڷ� ����� �մϴ�.");
	printf("\n\t - ī�װ�");
	printf("\n\t\t1. ����Ʈ");
	printf("\n\t\t2. ����");
	printf("\n\t\t3. ���� �̸�");
	printf("\n\n\t �����ϼ���. : ");
	scanf_s("%d", &n);
	return n;
}

int que_answer(char values[][WORDLEN])
{
	char* body = malloc(CHANCE + 1);
	int id = i_rnd(WORDS);
	char* word = values[id];
	int len = strlen(word);
	char* guessed = malloc(len); //len ��ŭ �Ҵ�� ������ �ּ� ��
	char falseWord[CHANCE];

	memset(body, ' ', CHANCE + 1);
	memset(guessed, '_', len);
	char guess;
	bool found;
	char* win;

	int mistakes = 0;
	do
	{

		found = false; // ī�װ� ���� �� �ʱ�ȭ��, ������ ã�� ���̹Ƿ� false�� ����.
		printf("\n\n");
		printBody(mistakes, body);  // �ܵδ� �׸� �ʱ�ȭ��
		printf("\n\n");
		printf("\t���� ��� : ");

		if (mistakes == 0)
		{
			printf("\n");
		}

		//Ʋ���� �� ���ڸ� ���� ��� : �ڿ� ���� �ִ� �ݺ���.
		for (int i = 0; i < mistakes; ++i)
		{
			printf("%c", falseWord[i]);
		}

		printf("\n\n");
		printWord(guessed, len); // ���� ������ ���� �� �ܾ���� ��ŭ "_" ����� ���� �Ҵ� �� ���
		printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
		// ��������� �ʱ� ȭ��
		do
		{
			scanf_s("%c", &guess); //�Է��ϼ��� : �ڿ� �Է¹��� ����
		} while (getchar() != '\n'); //�Է¹��� ���ڰ� �����̽��ٰ� �ƴ� �� ���� ����


		//�Է��� ���ڰ� ����� ��ġ�ϴ� ���ڰ� ���� ��� �� ���ڷ� �ٲ� ��
		for (int i = 0; i < len; ++i)
		{
			if (word[i] == guess)
			{
				found = true;//����� ��ġ�ϴ� ���ڰ� �ִ�!
				guessed[i] = guess;
			}
		}
		if (!found)
			//���1 : �� for������ true�� �ٲ� ���, 
			//���2 : �� for������ ������ ��� false �״�� ���� ���
			//��� 1 : found=true, ���2 : found = false
			//��� 1: !found=false, ���2 : !found = true
		{
			//����� ��ġ�ϴ� ���ڰ� ����
			falseWord[mistakes] = guess;
			// ���� ���(falseWord �迭)�� ��ȣ�� �Է��� ����(guess)�� �Է�
			mistakes += 1; //Ʋ������ mistake�� ++�ϱ�.
		}
		win = strchr(guessed, '_');
		//strchr=���ڿ� ���� ��ġ�ϴ� ���ڰ� �ִ� �� �˻��ϴ� �Լ�
		//���� �� ���ڿ��� "_"�� �ִ��� �˻���.
		system("cls");
	} while (mistakes < CHANCE && win != NULL);
	//Ʋ�� Ƚ���� CHANCE(6)���� �����鼭, 
	//���� ���� ���ڿ��� "_"�� ���� ��(NULL) ������ ����

	//���� ���� ���ڿ��� _�� ���� = �¸�
	if (win == NULL)
	{
		printf("\n");
		printWord(guessed, len);
		printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word);
	}
	//�� ���� ���(6���̻� ���ų� NULL�� �ִ� ���)
	else
	{
		printf("\n");
		printBody(mistakes, body); //body�� 6���� ������ ����� ���
		printf("\n\n\t���� ��ȸ��! ������ : %s\n\n", word);
	}

	free(body); //���� �Ҵ� ����
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
		printf("\n\t - �α��ִ� ����Ʈ �� �ϳ��Դϴ�. ex. Google");
		rewind(stdin);
		que_answer(values);
	case 2:
		printf("\n");
		char values2[WORDS][WORDLEN] = { "china","india","unitedstatesofameria","indonesia","brazil","japan",
			"korea","vietnam","turkey","germany" };
		system("cls");
		printf("\n\t - ������ �� �ϳ��Դϴ�. ex. korea");
		rewind(stdin);
		que_answer(values);
		break;
	case 3:
		printf("\n");
		char values3[WORDS][WORDLEN] = { "orange","mango","watermelon",
			"peach","banana","melon","apple","dragonfruit","grape","strawberry" };
		system("cls");
		printf("\n\t -���� �̸� �� �ϳ��Դϴ�. ex. orange");
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
//	char* guessed = malloc(len); //len ��ŭ �Ҵ�� ������ �ּ� ��
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

//		found = false; // ī�װ� ���� �� �ʱ�ȭ��, ������ ã�� ���̹Ƿ� false�� ����.
//		printf("\n\n");
//		printBody(mistakes, body);  // �ܵδ� �׸� �ʱ�ȭ��
//		printf("\n\n");
//		printf("\t���� ��� : "); 

//		if (mistakes == 0) 
//		{
//			printf("\n");
//		}
//		
//		//Ʋ���� �� ���ڸ� ���� ��� : �ڿ� ���� �ִ� �ݺ���.
//		for (int i = 0; i < mistakes; ++i)
//		{
//			printf("%c", falseWord[i]); 
//		}
//		
//		printf("\n\n");
//		printWord(guessed, len); // ���� ������ ���� �� �ܾ���� ��ŭ "_" ����� ���� �Ҵ� �� ���
//		printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
//		// ��������� �ʱ� ȭ��
//		do
//		{
//			scanf_s("%c", &guess); //�Է��ϼ��� : �ڿ� �Է¹��� ����
//		} while (getchar() != '\n'); //�Է¹��� ���ڰ� �����̽��ٰ� �ƴ� �� ���� ����


//		//�Է��� ���ڰ� ����� ��ġ�ϴ� ���ڰ� ���� ��� �� ���ڷ� �ٲ� ��
//		for (int i = 0; i < len; ++i) 
//		{
//			if (word[i] == guess)
//			{
//				found = true;//����� ��ġ�ϴ� ���ڰ� �ִ�!
//				guessed[i] = guess;
//			}
//		}
//		if (!found) 
//			//���1 : �� for������ true�� �ٲ� ���, 
//			//���2 : �� for������ ������ ��� false �״�� ���� ���
//			//��� 1 : found=true, ���2 : found = false
//			//��� 1: !found=false, ���2 : !found = true
//		{
//			//����� ��ġ�ϴ� ���ڰ� ����
//			falseWord[mistakes] = guess; 
//			// ���� ���(falseWord �迭)�� ��ȣ�� �Է��� ����(guess)�� �Է�
//			mistakes += 1; //Ʋ������ mistake�� ++�ϱ�.
//		}
//		win = strchr(guessed, '_'); 
//		//strchr=���ڿ� ���� ��ġ�ϴ� ���ڰ� �ִ� �� �˻��ϴ� �Լ�
//		//���� �� ���ڿ��� "_"�� �ִ��� �˻���.
//		system("cls");
//	} while (mistakes < CHANCE && win != NULL);
//	//Ʋ�� Ƚ���� CHANCE(6)���� �����鼭, 
//	//���� ���� ���ڿ��� "_"�� ���� ��(NULL) ������ ����
//	
//	//���� ���� ���ڿ��� _�� ���� = �¸�
//	if (win == NULL)
//	{
//		printf("\n");
//		printWord(guessed, len);
//		printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word);
//	}
//	//�� ���� ���(6���̻� ���ų� NULL�� �ִ� ���)
//	else
//	{
//		printf("\n");
//		printBody(mistakes, body); //body�� 6���� ������ ����� ���
//		printf("\n\n\t���� ��ȸ��! ������ : %s\n\n", word);
//	}

//	free(body); //���� �Ҵ� ����
//	free(guessed);
//	break;
//case 2:
//	printf("\n");
//	char values2[WORDS][WORDLEN] = { "china","india","unitedstatesofameria","indonesia","brazil","japan",
//		"korea","vietnam","turkey","germany" };
//	system("cls");
//	printf("\n\t - ������ �� �ϳ��Դϴ�. ex. korea");
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
//		printf("\t���� ��� : ");
//		if (mistakes2 == 0) printf("\n");
//		for (int i = 0; i < mistakes2; ++i)
//		{
//			printf("%c", falseWord2[i]);
//		}
//		printf("\n\n");
//		printWord(guessed2, len2);
//		printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
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
//		printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word2);
//	}
//	else
//	{
//		printf("\n");
//		printBody(mistakes2, body2);
//		printf("\n\n\t���� ��ȸ��! ������ : %s\n\n", word2);
//	}

//	free(body2);
//	free(guessed2);
//	break;
//case 3:
//	printf("\n");
//	char values3[WORDS][WORDLEN] = { "orange","mango","watermelon",
//		"peach","banana","melon","apple","dragonfruit","grape","strawberry" };
//	system("cls");
//	printf("\n\t -���� �̸� �� �ϳ��Դϴ�. ex. orange");
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
//		printf("\t���� ��� : ");
//		if (mistakes3 == 0) printf("\n");
//		for (int i = 0; i < mistakes3; ++i)
//		{
//			printf("%c", falseWord3[i]);
//		}
//		printf("\n\n");
//		printWord(guessed3, len3);
//		printf("\t�ҹ��� ���ĺ��� �Է��ϼ���. : ");
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
//		printf("\n\t�����մϴ�! �� ����� ���߽��ϴ�. : %s\n\n", word3);
//	}
//	else
//	{
//		printf("\n");
//		printBody(mistakes3, body3);
//		printf("\n\n\t���� ��ȸ��! ������ : %s\n\n", word3);
//	}

//	free(body3);
//	free(guessed3);
//	break;
//default:
//	break;
//}
