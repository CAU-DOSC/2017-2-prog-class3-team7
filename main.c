#include "headerfile.c"

int main()
{
	int n, value = 0
	cnt = 0;
	LINK head = NULL;
	LINK cur = NULL;

	printf("정수값을 입력하세요. >> \n");

	while(1)
	{
		n = scanf("%d", &value);
		if (n != 1)
			break;
		cur = createNode(value);
		if (cur == NULL)
		{
			printf("에러가 발생했습니다.");
			exit(1);
		}
		head = append(head, cur);
	}
	
	//print
	
	printf("1. 입력된 자료의 개수는 %d개 입니다.\n", cnt);
	printf("2. 입력자료를 입력 역순으로 출력 >> \n");
	reverseList(head);
	printf("3. 입력자료의 중간 위치에 있는 자료의 값 출력 >> \n");
	middle(cur);
	printf("4. 입력자료를 입력 순으로 출력 >> \n\n");
	printList(head);
	odd_deleteList(head);
	printf("입력자료에서 홀수번째 자료를 모두 삭제하였습니다. \n\n");
	printf("5. 남은 자료를 순서대로 출력 >> \n");
	printfList(head);

	return 0;
}
