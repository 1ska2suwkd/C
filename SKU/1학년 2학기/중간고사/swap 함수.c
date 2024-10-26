#include <stdio.h>

void swap(int* px, int* py);

int main() {
	int a = 100;
	int b = 200;

	swap(&a, &b);

	printf("%d %d", a, b);

	return 0;
}

void swap(int* px, int* py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
