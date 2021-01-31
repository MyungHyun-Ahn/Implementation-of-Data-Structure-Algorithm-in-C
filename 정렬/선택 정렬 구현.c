//배열 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define SIZE 1000

int a[SIZE];

//스왑 함수 : 정렬은 두개의 위치를 바꾸는 일이 많음.
int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//선택 정렬 수행 함수
int main(void) {
	int n, min, index;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0;i < n;i++) {
		min = INT_MAX;
		for (int j = i;j < n;j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		swap(&a[i], &a[index]);
	}
	for (int i = 0;i < n;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}