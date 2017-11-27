#define _CRT_SECURE_NO_WARNINGS //scanf(), gets()등의 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerfile.h"

int main()
{
	int value = 0;
	int cnt = 0;
	LINK head = NULL;
	LINK cur = NULL;

	printf("Put Integers. >> \n");

	while(scanf("%d", &value) != EOF)
	{
		cur = createNode(value, &cnt);
		if (cur == NULL)
		{
			printf("An Error Occured.");
			exit(1);
		}
		head = append(cur, head);
	}
	
	printf("%d Integers were entered.\n", cnt);
	printf("2. Print Inputs in reverse order >> \n\n");
	reverseList(head, &cnt);
	printf("\n\n3. Print the middle value >> \n\n");
	middle(head, &cnt);
	printf("\n4. Print Inputs in right order >> \n\n");
	printList(head);
	head=odd_deleteList(head, cnt);
	printf("\n\nOdd-th entered values were deleted. \n\n");
	printf("5. Print the rest of values >> \n\n");
	printList(head);
	printf("\n\n");

	return 0;
}
