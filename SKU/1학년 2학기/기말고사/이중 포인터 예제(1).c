#include <stdio.h>

int main() {
	int i;
	int* p = &i;
	int** q = &p;

	*p = 200;

	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);

	**q = 300;
	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);

	return 0;
}
