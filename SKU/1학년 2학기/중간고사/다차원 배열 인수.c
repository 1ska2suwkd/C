#include <stdio.h>
#define YEARS 3
#define PRODUTS 5

int sum(int grade[][PRODUTS]); 
//2차원 배열 매개변수는 첫번째 차원은 생략할 수 있지만 2차원은 생략 불가능

int main() {
	int total_sale;
	int sales[YEARS][PRODUTS] = { {1,2,3},{4,5,6},{7,8,9} };
	total_sale = sum(sales);
	printf("총매출은 %d입니다.", total_sale);

	return 0;
}

int sum(int grade[][PRODUTS]) {
	int sum = 0;
	int i, j;

	for (i = 0; i < YEARS; i++) {
		for (j = 0; j < PRODUTS; j++) {
			sum += grade[i][j];
		}
	}

	return sum;
}
