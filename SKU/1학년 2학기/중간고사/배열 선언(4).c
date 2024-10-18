#include <stdio.h>
#define SIZE 5
int main() {
	int i;
	int grade[SIZE];
	int sum = 0;
	int average;

	for (i = 0; i < SIZE; i++) {
		printf("학생들의 성적을 입력하시오:");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}

	average = sum / SIZE;

	printf("성적 평균 = %d\n", average);

	return 0;
}
