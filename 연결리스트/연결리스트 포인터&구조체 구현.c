#include <stdio.h>
#include <stdlib.h>

//연결리스트 구조체 선언
typedef struct {
	int data;
	struct Node *next;
}Node;

//항상 헤드노드로부터 시작하므로 헤드 변수 선언
//노드는 항상 포인터 변수로 동적 할당을 이용하여 변수를 선언하는게 일반적임
Node *head;

//연결리스트 삽입 함수
void addFront(Node *root, int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = root->next;
	root->next = node;
}

//연결리스트 삭제 함수
void removeFront(Node *root) {
	Node *front = root->next;
	root->next = front->next;
	free(front);
}

//연결리스트 메모리 해제 함수
void freeAll(Node *root) {
	Node *cur = head->next;
	while (cur != NULL) {
		Node *next = cur->next;
		free(cur);
		cur = next;
	}
}

//연결리스트 전체 출력함수
void showAll(Node *root) {
	Node *cur = head->next;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

int main(void) {
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	addFront(head, 6);
	addFront(head, 3);
	addFront(head, 5);
	addFront(head, 1);
	addFront(head, 7);
	removeFront(head);
	//출력 예상 1 5 3 6
	showAll(head);
	freeAll(head);
	return 0;
}