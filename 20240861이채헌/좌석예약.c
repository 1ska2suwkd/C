//#include <stdio.h>
//#define SIZE 10
//int main() {
//	char ans1;
//	int ans2;
//	int seats[SIZE] = {0};
//	while (1) {
//		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)");
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
//			printf("\n���° �¼��� �����Ͻðڽ��ϱ�?");
//			scanf("%d", &ans2);
//			for (int i = 1; i <= SIZE; i++) {
//				if (ans2 == i && seats[i-1] == 0) {
//					seats[i-1] = 1;
//					printf("����Ǿ����ϴ�.\n");
//				}
//				else if (ans2 == i && seats[i-1] == 1) {
//					printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
//				}
//			}
//		}
//	}
//	return 0;
//}