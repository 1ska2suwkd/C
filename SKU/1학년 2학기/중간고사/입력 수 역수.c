#include <stdio.h>
#define SIZE 5
int main() {
	int a[SIZE] = { 0 };
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("정수를 입력하시오:");
		scanf("%d", &a[i]);
	}

	for (i = SIZE-1; i >= 0; i--) {
		printf("%d\n", a[i]);
	}
}
