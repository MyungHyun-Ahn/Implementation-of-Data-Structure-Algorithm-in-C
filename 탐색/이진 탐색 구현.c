// 이진 탐색 구현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100000  // 전체 데이터 수

int a[MAX_SIZE];
int founded = 0;

int search(int start, int end, int target) {
	if (start > end) return -9999;
	int mid = (start + end) / 2;
	if (a[mid] == target) return mid;
	else if (a[mid] > target) return search(start, mid - 1, target);   // 재귀적으로 동작
	else return search(mid + 1, end, target);
}

int main(void) {
	int n, target;
	scanf("%d %d", &n, &target);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);    // 정렬이 되있어야함
	}
	int result = search(0, n - 1, target);   // 0부터 n-1까지 반복
	if (result != -9999) {
		printf("%d번째 원소입니다.\n", result + 1);
	}
	else {
		printf("원소를 찾을 수 없습니다.\n");
	}
	return 0;
}