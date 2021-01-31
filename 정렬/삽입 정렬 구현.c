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

//삽입 정렬 수행
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0;i < n - 1;i++) {
		int j = i;
		while (j >= 0 && a[j] > a[j + 1]) {
			swap(&a[j], &a[j + 1]);
			j--;
		}
	}
	for (int i = 0;i < n;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}