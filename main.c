#define _CRT_SECURE_NO_WARNINGS //scanf(), gets()등의 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerfile.h"

int main()
{
	int n, value = 0;
	int cnt = 0;
	LINK head = NULL;
	LINK cur = NULL;

	printf("Put Integers. >> \n");

	while(1)
	{
		n = scanf("%d", &value);
		if (n != 1)
			break;
		cur = createNode(value, &cnt);
		if (cur == NULL)
		{
			printf("An Error Occured.");
			exit(1);
		}
		head = append(cur, head);
	}
	
	//print
	
	printf("1. %d Integers were entered.\n", cnt);
	printf("2. Print Inputs in reverse order >> \n");
	reverseList(head, &cnt);
	printf("\n\n3. Print the middle value >> \n");
	middle(head, &cnt);
	printf("\n4. Print Inputs in right order >> \n\n");
	printList(head);
	odd_deleteList(head, &cnt);
	printf("\n\nOdd-th entered values were deleted. \n\n");
	printf("5. Print the rest of values >> \n");
	printList(head);

	return 0;
}
