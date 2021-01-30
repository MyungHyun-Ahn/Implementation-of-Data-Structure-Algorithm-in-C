#include <stdio.h>
#include <stdlib.h>

//양방향 연결리스트 구조체 선언
typedef struct {
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

Node *head, *tail;

//양방향 연결리스트 삽입 함수
void insert(int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	Node *cur;
	cur = head->next;
	while (cur->data < data && cur != tail) {
		cur = cur->next;
	}
	Node *prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

//양방향 연결리스트 삭제 함수
void removeFront() {
	Node *node = head->next;
	head->next = node->next;
	Node *next = node->next;
	next->prev = head;
	free(node);
}

//양방향 연결리스트 전체 출력 함수
void show() {
	Node *cur = head->next;
	while (cur != tail) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

int main(void) {
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head->next = tail;
	head->prev = head;
	tail->next = tail;
	tail->prev = head;
	insert(3);
	insert(7);
	insert(8);
	insert(2);
	insert(4);
	removeFront();
	show();
	return 0;
}