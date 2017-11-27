#include "headerfile.h"

LINK createNode(int value, int *cnt)
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
	(*cnt)++;
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

void printList(LINK head)
{
	LINK nextNODE = head;
	while (nextNODE != NULL)
	{
		printf("%4d  ", nextNODE->value);
		nextNODE = nextNODE->next;
	}
}

void reverseList(LINK head, int *cnt)
{
	LINK nextNODE = head;
	for (int i = 0; i < *cnt; i++)
	{
		for (int j = 0; j < *cnt - i - 1; j++)
			nextNODE = nextNODE->next;
		if (nextNODE->value != 0)
			printf("%4d  ", nextNODE->value);
		nextNODE = head;
	}
}

/*
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
*/

LINK odd_deleteList(LINK head, int cnt)
{
	if ((cnt % 2) == 0)
	{
		head = noderemover_str(head);
		for (int n = 1; n <= ((cnt / 2) - 1); n++)
		{
			head = noderemover(head, n);
		}
	}
	else
	{
		head = noderemover_str(head);
		for (int n = 1; n <= (cnt / 2); n++)
		{
			head = noderemover(head, n);
		}
	}
	return head;
}

LINK noderemover_str(LINK head)
{
	LINK removenode_str = head->next;
	head = removenode_str;
	return head;
}

LINK noderemover(LINK head, int count)
{
	int i = 1;
	LINK tempnode = head;
	LINK removenode = tempnode->next;
	while (i <= count - 1)
	{
		removenode = removenode->next;
		tempnode = tempnode->next;
		i++;
	}
	tempnode->next = removenode->next;
	free(removenode);
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
		printf("%4d  ", nextNODE->value);
	}
	if (*cnt % 2 == 0)
	{
		for (int i = 0; i<(int)(*cnt / 2 + 0.5); i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%4d  ", nextNODE->value);
		nextNODE = head;
		for (int i = 0; i<(int)(*cnt / 2 + 0.5) - 1; i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%4d  ", nextNODE->value);
	}
	puts("");
}