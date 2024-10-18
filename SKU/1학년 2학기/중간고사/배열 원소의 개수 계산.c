#include <stdio.h>
int main() {
	int grade[5] = {0};
	int i,size;

	size = sizeof(grade) / sizeof(grade[0]);

	for (i = 0; i < size; i++) {
		printf("%d\n", grade[i]);
	}

	return 0;
}
