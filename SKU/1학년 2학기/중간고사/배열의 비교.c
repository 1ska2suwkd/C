#include <stdio.h>
#define SIZE 5
int main() {
	int a[SIZE];
	int b[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("a[%d]의 값을 입력하시오:", i);
		scanf("%d", &a[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++) {
		printf("b[%d]의 값을 입력하시오:", i);
		scanf("%d", &b[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			printf("배열 a와 b는 같지않습니다.\n");

			return 0;
		}
	}
	printf("배열 a와 b는 같습니다.\n");

	return 0;
}
