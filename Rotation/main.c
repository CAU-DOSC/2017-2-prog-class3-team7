#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int length;
	int d;

	double trivial_time;
	double BlockSwap_time;
	clock_t start, end;

	printf("input str1 length>");
	scanf("%d", &length);
	printf("input rotate distance\n");
	printf("input positive number : clockwise rotation\n");
	printf("input negative number : countclockwise rotation\n>");
	scanf("%d", &d);
	char *str1 = (char *)malloc(length + 1);
	for (int i = 0; i < length; i++)
	{
		str1[i] = i;
	}
	start = clock();
	trivial(str1, d, length);
	end = clock();
	trivial_time = end - start;

	start = clock();
	BlockSwap(str1, d, length);
	end = clock();
	BlockSwap_time = end - start;

	return 0;
}