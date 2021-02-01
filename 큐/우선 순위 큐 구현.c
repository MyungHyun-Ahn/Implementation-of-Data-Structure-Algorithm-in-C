// 우선순위 큐의 정의
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 10000

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

typedef struct {
	int heap[MAX_SIZE];
	int count;
} priorityQueue;

// 우선순위 큐의 삽입
void push(priorityQueue *pq, int data) {
	if (pq->count >= MAX_SIZE) return;
	pq->heap[pq->count] = data;   // 항상 완전 이진 트리의 마지막 원소로 data가 들어감
	int now = pq->count;          // 삽입한 data의 인덱스를 now라고함
	int parent = (pq->count - 1) / 2;
	// 새 원소를 삽입한 이후에 상향식으로 힙을 구성
	while (now > 0 && pq->heap[now] > pq->heap[parent]) {  // 자신이 부모보다 더 크다면
		swap(&pq->heap[now], &pq->heap[parent]);           // 위치를 서로 바꿔줌
		now = parent;
		parent = (parent - 1) / 2;
	}
	pq->count++;
}

// 우선순위 큐의 추출
int pop(priorityQueue *pq) {
	if (pq->count <= 0) return -9999;
	int res = pq->heap[0];  // 루트 노드의 값을 담았다가 리턴
	pq->count--;
	pq->heap[0] = pq->heap[pq->count];  // 가장 마지막 원소를 루트 노드에 넣어줌
	int now = 0, leftChild = 1, rightChild = 2;
	int target = now;
	// 새 원소를 추출한 이후에 하향식으로 힙을 구성
	while (leftChild < pq->count) {   // 원소가 존재할 때까지만 반복
		if (pq->heap[target] < pq->heap[leftChild]) target = leftChild;
		if (pq->heap[target] < pq->heap[rightChild] && rightChild < pq->count) target = rightChild;
		if (target == now) break;     // 더 이상 내려가지 않아도 될 때 종료
		else {
			swap(&pq->heap[now], &pq->heap[target]); 
			now = target;
			leftChild = now * 2 + 1;     // now를 기준으로 leftChild와 rightChild를 다시 설정해줌
			rightChild = now * 2 + 2;
		}
	}
	return res;
}

int main(void) {
	int n, data;
	scanf("%d", &n);
	priorityQueue pq;
	pq.count = 0;
	for (int i = 0;i < n;i++) {
		scanf("%d", &data);
		push(&pq, data);
	}
	for (int i = 0;i < n;i++) {   // 큰 숫자부터 우선순위에 맞춰 출력됨
		int data = pop(&pq);
		printf("%d ", data);
	}
	return 0;
}