#include <stdio.h>
#define STUDENTS 5

int main() {
	int grade[STUDENTS] = { 30,20,10,40,50 };
	int i,j;

	for (i = 0; i < STUDENTS; i++) {
		printf("번호 %d:",i);
		for (j = 0; j < grade[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}
