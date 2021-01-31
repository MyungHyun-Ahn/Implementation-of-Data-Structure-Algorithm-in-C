//큐 선언
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node *next;
} Node;

typedef struct {
	Node *front;
	Node *rear;
	int count;
} Queue;

//큐 삽입 함수
void push(Queue *queue, int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (queue->count == 0) { 
		queue->front = node; //초기 세팅 
	}
	else {
		queue->rear->next = node;  //rear의 다음 노드에 새 노드가 들어오고
	}
	queue->rear = node;  //리어가 해당 노드가 된다.
	queue->count++;
}

//큐 추출 함수
int pop(Queue *queue) {
	if (queue->count == 0) {
		printf("큐 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node *node = queue->front;
	int data = node->data;
	queue->front = node->next;
	free(node);
	queue->count--;
	return data;
}

//큐 전체 출력 함수
void show(Queue *queue) {
	Node *cur = queue->front;
	printf("--- 큐의 앞 ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 큐의 뒤 ---\n");
}

int main(void) {
	Queue queue;
	queue.front = queue.rear = NULL;
	queue.count = 0;
	push(&queue, 9);
	push(&queue, 3);
	push(&queue, 5);
	pop(&queue);
	push(&queue, 6);
	pop(&queue);
	show(&queue);   //예상 출력 5 6
	return 0;
}