//#include <stdio.h>
//#define SIZE 10
//int main() {
//	char ans1;
//	int ans2;
//	int seats[SIZE] = {0};
//	while (1) {
//		printf("좌석을 예약하시겠습니까?(y 또는 n)");
//		scanf(" %c", &ans1);
//		if (ans1 == 'n')
//			break;
//		if (ans1 == 'y') {
//			printf("-------------------------------\n");
//			printf("1 2 3 4 5 6 7 8 9 10\n");
//			printf("-------------------------------\n");
//			for (int i = 0; i < SIZE; i++) {
//				printf("%d", seats[i]);
//			}
//			printf("\n몇번째 좌석을 예약하시겠습니까?");
//			scanf("%d", &ans2);
//			for (int i = 1; i <= SIZE; i++) {
//				if (ans2 == i && seats[i-1] == 0) {
//					seats[i-1] = 1;
//					printf("예약되었습니다.\n");
//				}
//				else if (ans2 == i && seats[i-1] == 1) {
//					printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
//				}
//			}
//		}
//	}
//	return 0;
//}