#include <stdio.h>
#define SIZE 10

int main() {
	int a[SIZE] = { 0 };
	char ans1;
	int i,ans2;
	
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n') return 0;

		printf("-------------------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("-------------------------------\n");
		
		for (i = 0; i < SIZE; i++) {
			printf("%d ", a[i]);
		}

		printf("\n몇번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans2);

		for (i = 0; i < SIZE; i++) {
			if (ans2 == i + 1) {
				if (a[i] == 1) {
					printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요\n");
					break;
				}
				
				else {
					printf("예약되었습니다.\n");
					a[i] = 1;
				}

			}
		}
	}
	return 0;
}
