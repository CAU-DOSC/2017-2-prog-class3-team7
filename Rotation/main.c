#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int n, d;

	double elapsed_time;
	clock_t start, end;

	printf("input the length of string> ");		//string의 길이 n 입력
	scanf("%d", &n);

	printf("input the number of string to rotate> ");		//rotate시킬 string의 길이 d 입력 (음수 입력시 반대방향으로 rotate하도록 짤 것)
	scanf("%d", &d);

	char *str = (char*)malloc((sizeof(char) * n) + 1);		//str 생성

	for (int i = 0; i < n; i++)		//str을 랜덤하게 채움 (범위 : 'a' ~ 'z')
		str[i] = (rand() % 25) + 'a';
	str[n] = NULL;					//str의 마지막은 NULL로 채움

	printf("\noriginal string : %s\n\n", str);//str 내용 출력
	char *str_temp = (char*)malloc((sizeof(char) * n) + 1);		//str과 길이가 같은 str_temp 생성

	/*
	//Trivial로 실행
	strcpy(str_temp, str);
	start = clock();
	trivial(str_temp, d, n);
	end = clock();
	elapsed_time = end - start;
	printf("Trivial\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);
	*/

	//BlockSwap로 실행
	strcpy(str_temp, str);
	start = clock();
	BlockSwap(str_temp, n, d);
	end = clock();
	elapsed_time = end - start;
	printf("BlockSwap\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	return 0;
}