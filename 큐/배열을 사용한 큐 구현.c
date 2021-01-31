//큐 선언
#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;

//큐 삽입 함수
void push(int data) {
	if (rear >= SIZE) {
		printf("큐 오버플로우가 발생했습니다.\n");
		return 0;
	}
//뒤에서부터 데이터를 저장
	queue[rear++] = data;
}

//큐 추출 함수
int pop() {
	if (front == rear) {
		printf("큐 언더플로우가 발생했습니다.\n");
		return -INF;
	}
//앞에서부터 데이터를 빼줌
	return queue[front++];
}

//큐 출력 함수
void show() {
	printf("--- 큐의 앞 ---\n");
	for (int i = front;i < rear;i++) {
		printf("%d\n", queue[i]);
	}
	printf("--- 큐의 뒤 ---\n");
}

int main(void) {
	push(7);
	push(5);
	push(4);
	pop();
	push(6);
	pop();
	show();       //예상 출력 결과 4 6
	return 0;
}