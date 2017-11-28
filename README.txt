# README file for TEAM[3,7]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.


Ownership

README.txt :	임창환(DogRing)
headerfile.h :	이정윤(JungYoonLee)
main.c :	구경민(dudn025)
library.c :	안재형(lbr0452000)
		박상현(galaxy821)


Program summary

Head 라는 struct node를 가리키는 pointer를 사용하여
ctrl-z가 입력될 때까지 입력받은 정수값을 linked list를 구성하며 node에 저장


Library function List

createNode(int, int*)
	// 새 NODE 생성 후 주소값반환

append(LINK, LINK)
	// 새 NODE의 주소값을 받아 연결

void printList(LINK)
	// Linked List를 순서대로 출력

void reverseList(LINK, int*)
	// Linked List를 역순으로 출력

void middle(LINK, int*)
	// Linked List의 가운데 값을 출력

LINK odd_deleteList(LINK, int)
	// Linked List의 홀수번째 node를 삭제
