#include <stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

//데이터를 배열의 뒷부분에 담는 함수
void addBack(int data) {
	arr[count] = data;
	count++;
}

//데이터를 배열의 앞부분에 담는 함수
void addFirst(int data) {
	for (int i = count;i > 0;i--) {
		arr[i] = arr[i - 1];         //배열의 원소를 한칸씩 당겨줌
	}
	arr[0] = data;
	count++;
}

void show() {
	for (int i = 0;i < count;i++) {
		printf("%d ", arr[i]);
	}
}

//특정한 위치의 원소를 삭제하는 함수
void removeAt(int index) {
	for (int i = index;i < count - 1;i++) {
		arr[i] = arr[i + 1];
	}
	count--;
}

int main(void) {
	//앞에서부터 저장
	addFirst(4);
	addFirst(6);
	addFirst(8);
	//뒤로 저장
	addBack(9);
	removeAt(3);
	addBack(7);
	addBack(5);
	//출력 예상 8 6 4 7 5
	show();
	return 0;
}