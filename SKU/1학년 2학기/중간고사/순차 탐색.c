#include <stdio.h>
#define SIZE 9
int main(){
	int n,i;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &n);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == n) {
			printf("탐색 성공 인덱스 = %d\n", i);
			printf("탐색 종료\n"); return 0;
		}
	}

	return 0;
}
