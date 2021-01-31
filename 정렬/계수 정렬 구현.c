//계수 정렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10001   // 가장 큰 값  10000보다 더 큰 값이 있으면 안됨
                          // 다른 정렬보다 더 많은 메모리를 요구하지만 빠르게 동작할 수 있다.     
int n, m;               
int a[MAX_VALUE];

int main() {
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &m);
		a[m]++;      // 값이 입력될 때마다 해당 값의 배열을 1씩 더해줌
	}
	for (int i = 0;i < MAX_VALUE;i++) {
		while (a[i] != 0) {       // 특정 원소가 0이 아니라면 그 원소의 크기만큼 해당 배열을 출력함
			printf("%d ", i);
			a[i]--;
		}
	}
	return 0;
}