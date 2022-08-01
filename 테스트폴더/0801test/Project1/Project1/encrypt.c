#include<stdio.h>
#define WORDS 10 //총 단어의 갯수
#define WORDLEN 40 //각 단어의 최대 크기
#define CHANCE 6 //주어지는 기회
void encrypt(char* code) {
	int hash = strlen(code);
	char* encrypt = malloc((hash * 3) + 3);
	char* toHash = encrypt;
	for (char ch = *code; ch != '\0'; ch = *(++code))
	{
		int hashNum = encrypt - toHash;
		*(encrypt++) = (char)126 - i_rnd(66);
		*(encrypt++) = (char)126 - i_rnd(66);
		*(encrypt++) = ch + hash - hashNum;
	}

	*(encrypt++) = (char)126 - i_rnd(66);
	*(encrypt++) = (char)126 - i_rnd(66);
	*encrypt = '\0';
	printf("\nEncrypted Code : %s\n\n", toHash);
	free(toHash);
}
int main()
{
	char values[WORDS][WORDLEN] = { "N~mqOlJ^tZletXodeYgs","gCnDIfFQe^CdP^^B{hZpeLA^hv","7urtrtwQv{dt`>^}FaR]i]XUug^GI",
										"aSwfXsxOsWAlXScVQmjAWJG","cruD=idduvUdr=gmcauCmg]","BQt`zncypFVjvIaTl]u=_?Aa}F",
										"iLvkKdT`yu~mWj[^gcO|","jSiLyzJ=vPmnv^`N]^>ViAC^z_","xo|RqqhO|nNstjmzfiuoiFfhwtdh~",
										"OHkttvxdp|[nnW]Drgaomdq" };
	encrypt("N~mqOlJ ^ tZletXodeYgs");
	
}