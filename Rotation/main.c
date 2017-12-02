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

	printf("input the length of string> ");		//string�� ���� n �Է�
	scanf("%d", &n);

	printf("input the number of string to rotate> ");		//rotate��ų string�� ���� d �Է� (���� �Է½� �ݴ�������� rotate�ϵ��� © ��)
	scanf("%d", &d);

	char *str = (char*)malloc((sizeof(char) * n) + 1);		//str ����

	for (int i = 0; i < n; i++)		//str�� �����ϰ� ä�� (���� : 'a' ~ 'z')
		str[i] = (rand() % 25) + 'a';
	str[n] = NULL;					//str�� �������� NULL�� ä��

	printf("\noriginal string : %s\n\n", str);//str ���� ���
	char *str_temp = (char*)malloc((sizeof(char) * n) + 1);		//str�� ���̰� ���� str_temp ����

	/*
	//Trivial�� ����
	strcpy(str_temp, str);
	start = clock();
	trivial(str_temp, d, n);
	end = clock();
	elapsed_time = end - start;
	printf("Trivial\n");
	printf("\tResult : %s\n", str_temp);
	printf("\tElapsed Time : %d\n", elapsed_time);
	*/

	//BlockSwap�� ����
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