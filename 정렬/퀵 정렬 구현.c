//배열 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int a[SIZE];

//스왑 함수
int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//퀵 정렬 함수
void quickSort(int start, int end) {                 // 부분 배열의 시작과 끝
	if (start >= end) return;
	int key = start, i = start + 1, j = end, temp;   // i는 왼쪽에서 출발하는 위치, j는 오른쪽에서 출발하는 위치,
	                                                 // key는 항상 피벗값이 부분배열의 시작값이 되도록 만듬.
	while (i <= j) { //엇갈릴 때까지 반복
		while (i <= end && a[i] <= a[key]) i++;  // a[key]보다 큰 값이 a[i]에 담김
		while (i > start && a[j] >= a[key]) j--; // a[key]보다 작은 값이 a[j]에 담김
		if (i > j) swap(&a[key], &a[j]);         // 엇갈린 상태라면 a[key]와 작은 값인 a[j]를 바꿔줌
		else swap(&a[i], &a[j]);                 // 그렇지 않다면 a[i]와 a[j]를 바꿔줌
	}
	quickSort(start, j - 1);     //부분 배열로 재귀적으로 2번 호출하게 만듬
	quickSort(j + 1, end);
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) scanf("%d", &a[i]);
	quickSort(0, n - 1);
	for (int i = 0;i < n;i++) printf("%d ", a[i]);
	return 0;
}