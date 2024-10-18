#include <stdio.h>
#include <stdlib.h> //rand()
#define SIZE 5

int main() {
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++) {
		grade[i] = rand() % 100;
		printf("grade[%d] = %d\n",i, grade[i]);
	}

	return 0;
}
