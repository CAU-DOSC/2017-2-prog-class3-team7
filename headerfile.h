// file: headerfile.h



struct node
{
	int value;
	struct node *next;
};
typedef   struct node NODE;
typedef   NODE *LINK;

LINK createNode(int *value, int *cnt)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	if (cur == NULL)
	{
		printf("오류가 발생하였습니다.");
		return NULL;
	}
	//   cur->value = (int*)malloc(sizeof(int) * 2);
	cur->value = value;
	cur->next = NULL;
	*cnt++;
	return cur;
}

LINK append(LINK cur, LINK head)
{
	LINK nextNode = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}

	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	nextNode->next = cur;

	return head;
}

void reverseList(LINK head)
{
	LINK nextNODE = head;
	while (nextNODE != NULL)
	{
		printf("%d\n", nextNODE->value);
		nextNODE = nextNODE->next;
	}
}

void printList(LINK head, int *cnt)
{
	LINK nextNODE = head;
	for (int i = 0; i < *cnt; i++)
	{
		for (int j = 0; j < *cnt - i - 1; j++)
			nextNODE = nextNODE->next;
		if (nextNODE->value != 0)
			printf("%d\n", nextNODE->value);
		nextNODE = head;
	}
}

void odd_deleteList(LINK head, int *cnt)
{
	LINK nextNODE = head;
	while (nextNODE != NULL)
	{
		if (*cnt % 2 == 1)
		{
			for (int i = 0; i < *cnt; i++)
			{
				if (i % 2 == 0)
				{
					nextNODE->value = 0;
				}
				nextNODE = nextNODE->next;
			}
		}
		if (*cnt % 2 == 0)
		{
			for (int i = 0; i < *cnt; i++)
			{
				if (i % 2 == 1)
				{
					nextNODE->value = 0;
				}
				nextNODE = nextNODE->next;
			}
		}

	}
	head = nextNODE;
	return head;
}

void middle(LINK head, int *cnt)
{
	LINK nextNODE = head;
	if (*cnt % 2 == 1)
	{
		for (int i = 0; i<(int)(*cnt / 2 + 0.5); i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
	}
	if (*cnt % 2 == 0)
	{
		for (int i = 0; i<(int)(*cnt / 2 + 0.5); i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
		nextNODE = head;
		for (int i = 0; i<(int)(*cnt / 2 + 0.5) - 1; i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
	}

}

#define _CRT_SECURE_NO_WARNINGS 
//scanf(), gets()등의 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node	//Linked List를 구현할 수 있는 구조체
{
	int value;			//값
	struct node *next;	//next value pointer
};

typedef struct node NODE;
typedef NODE *LINK;

int cnt;
