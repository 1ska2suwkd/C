#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
	int price[SIZE] = {0};
	int i,minimum;

	printf("---------------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------------\n");

	srand((unsigned)time(NULL)); //srand 함수는 난수 생성기의 seed를 설정,
								                //time(NULL)은 현재시간을 반환해줌

	for (i = 0; i < SIZE; i++) {
		price[i] = (rand() % 100) + 1; //srand로 설정한 난수들을 설정에 맞게 rand로 반환
		printf("%-3d ", price[i]);
	}

	minimum = price[0];

	for (i = 0; i < SIZE; i++) {
		if (minimum > price[i]) minimum = price[i];
	}

	printf("\n\n최소값은 %d입니다.\n", minimum);

	return 0;
}
