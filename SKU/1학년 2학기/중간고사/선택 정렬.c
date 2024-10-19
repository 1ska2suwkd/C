#include <stdio.h>
#define SIZE 10
int main() {
	int list[SIZE] = { 5,1,9,4,0,2,3,8,6,7 };
	int i, j;
	int least, temp;

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least])
				least = j;
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
}
