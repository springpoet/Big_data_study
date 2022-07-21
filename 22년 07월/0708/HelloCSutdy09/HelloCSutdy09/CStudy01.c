#include<stdio.h>
int main()
{
	char start[2048] = "1"; //최초의 숫자이자, 말하기용 숫자
	//읽고 말하기 수열의 20번째 값을 찾는 것
	//숫자라 생각말고 문자열이라 생각하기.
	for (int i = 1; i <= 20; i++)
	{
		printf("%d번째 : %s\n", i, start);
		char end[2048] = { NULL }; //읽고 말함에 있어서 누적용
		char num = start[0];//num=읽는숫자
		int count = 0;// 내가 읽은 문자의 개수
		int k = 0;//end에 문자 채워넣을 때 씀(누적용)
		//본격적으로 읽어들이기 시작
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j])//읽는 숫자가 변할때
			{
				end[k] = num;
				k++;
				end[k] = count + '0';//'0'=아스키코드. ex)count=1 ->end[1]=49='1' 
				k++;
				num = start[j];
				count = 1;
			}

			else // 같을 때
			{
				count++;
			}
		}
		end[k] = num;
		k++;
		end[k] = count + '0';
		k++;
		//end에 있는걸 start로 옮김
		//for문으로 옮겨도 되나 strcpy 함수 써도됨
		//strcpy(start, end);

		//end를 start로 옮기는 과정
		int c = 0;
		for (c = 0; end[c] != NULL; c++)
			//여기 int c입력시 밑에 start[c]이 start[0]=NULL이 되므로 출력안됨.
		{
			start[c] = end[c];
		}
		start[c] = NULL;//끝부분을 NULL로 봉합해야함
	}
	return 0;
}