// file: headerfile.h
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
