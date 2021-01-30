//스택의 선언
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node *next;
} Node;

typedef struct {
	Node *top;  // 스택의 최상단 노드
} Stack;

//스택 삽입 함수
void push(Stack *stack, int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;
}

//스택 추출 함수
void pop(Stack *stack) {
	if (stack->top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node *node = stack->top;
	int data = node->data;
	stack->top = node->next;
	free(node);
	return data;
}

//스택 전체 출력 함수
void show(Stack *stack) {
	Node *cur = stack->top;
	printf("--- 스택의 최상단 ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 스택의 최하단 ---\n");
}

int main(void) {
	Stack s;
	s.top = NULL;
	push(&s, 7);
	push(&s, 4);
	push(&s, 2);
	pop(&s);
	push(&s, 3);
	pop(&s);
	show(&s);   //예상 출력값 4 7
	return 0;
}

