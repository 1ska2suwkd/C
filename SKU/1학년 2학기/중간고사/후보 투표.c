#include <stdio.h>
#define SIZE 10

int main() {
	int freq[10] = {0};
	int ans=0,i;

	while (ans != -1) {
		printf("몇번 후보자를 선택하시겠습니까?(종료 -1): ");
		scanf("%d", &ans);
		freq[ans - 1]++;
	}

	printf("\n값\t득표결과\n");

	for (i = 0; i < SIZE; i++) {
		printf("%d\t%d\n", i + 1, freq[i]);
	}
}
