#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Header.h"

int main()
{
	int n, d;

	double tri_elapsed_time, bw_elapsed_time, jug_elapsed_time, rev_elapsed_time;
	clock_t start, end;

	printf("input the length of string> ");		//string�� ���� n �Է�
	scanf("%d", &n);

	printf("input the number of string to rotate> ");		//rotate��ų string�� ���� d �Է� (���� �Է½� �ݴ�������� rotate�ϵ��� © ��)
	scanf("%d", &d);

	char *str = (char*)malloc((sizeof(char) * n) + 1);		//str ����

	for (int i = 0; i < n; i++)		//str�� �����ϰ� ä�� (���� : 'a' ~ 'z')
		str[i] = (rand() % 25) + 'a';
	str[n] = '\0';					//str�� �������� NULL�� ä��

	printf("\noriginal string : %s\n\n", str);//str ���� ���

	char *str_temp = (char*)malloc((sizeof(char) * n) + 1);		//str�� ���̰� ���� str_temp ����

	
	//Trivial�� ����
	strcpy(str_temp, str);
	start = clock();
	trivial(str_temp, n, d);
	end = clock();
	tri_elapsed_time = end - start;
	printf("Trivial\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);


	//BlockSwap�� ����
	strcpy(str_temp, str);
	start = clock();
	BlockSwap(str_temp, n, d);
	end = clock();
	bw_elapsed_time = end - start;
	printf("BlockSwap\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);

	
	
	// Result Output
	printf("\nSTRLength\tROTATEdistance\tT.trivial\tT.juggle\tT.bw\tT.reverse");
	printf("\n%d\t\t%d\t\t\t%f\t%f\t%f\t%f\n",n,d,tri_elapsed_time,jug_elapsed_time,bw_elapsed_time,rev_elapsed_time);
	return 0;
}
