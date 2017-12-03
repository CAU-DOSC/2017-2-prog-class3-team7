#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Header.h"

int main()
{
	int n, d;

	double elapsed_time;
	clock_t start, end;

	printf("input the length of string> ");
	scanf("%d", &n);
	//Input the length of string

	printf("input the number of string to rotate> ");
	scanf("%d", &d);
	//Input the number of string to ratate (If negative input, rotate to the opposite direction)

	char *str = (char*)malloc((sizeof(char) * n) + 1);
	//Create str

	for (int i = 0; i < n; i++)	
		str[i] = (rand() % 25) + 'a';
	str[n] = '\0';
	//Fill the str randomly (range : 'a' ~ 'z')
	//Fill with NULL the end of str

	printf("\noriginal string : %s\n\n", str);
	//Output str contents
	char *str_temp = (char*)malloc((sizeof(char) * n) + 1);	
	//Create str_temp length equal to str
	
	//Trivial
	strcpy(str_temp, str);
	start = clock();
	trivial(str_temp, n, d);
	end = clock();
	elapsed_time = end - start;
	printf("Trivial\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	//Juggling
	strcpy(str_temp, str);
	start = clock();
	juggle(str_temp, n, d);
	end = clock();
	elapsed_time = end - start;
	printf("Juggling\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	//BlockSwap
	strcpy(str_temp, str);
	start = clock();
	BlockSwap(str_temp, n, d);
	end = clock();
	elapsed_time = end - start;
	printf("BlockSwap\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	//Reverse
	strcpy(str_temp, str);
	start = clock();
	reverse(str_temp, n, d);
	end = clock();
	elapsed_time = end - start;
	printf("Reverse\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	return 0;
}
