// file: headerfile.h
#define _CRT_SECURE_NO_WARNINGS //scanf(), gets()등의 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>

struct Node	//Linked List를 구현할 수 있는 구조체
{
	int value;			//값
	struct Node *next;	//next value pointer
};

struct Node *NodeFinder(struct node *index, int n)
{
	//index 포인터로부터 n번째 뒤에 연결되어있는 node의 포인터를 return 한다.
	struct Node *result = index;

	for (int i = 0;i < n;i++)
		result = result->next;
	
	return result;
}

void DelNode(struct node *index, int n)
{
	//index 포인터로부터 n번째 뒤에 연결되어있는 node를 삭제시킨 뒤 n-1번째 node의 *next가 n+1번째 node를 가리키게 한다.
	struct Node *temp = NodeFinder(index, n + 1);
	struct Node *trash = NodeFinder(index, n);
	//free(trash);			//알 수 없는 이유로 free함수가 동작하지 않음
	NodeFinder(index, n - 1)->next = temp;
}
