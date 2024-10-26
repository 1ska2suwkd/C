#include <stdio.h>
#define SIZE 5

void print_image(int image[][SIZE]);
void brighten_image(int image[][SIZE]);

int main() {
	int image[][SIZE] = {
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50}
	};

	print_image(image);
	brighten_image(image);
	print_image(image);

	return 0;
}

void print_image(int image[][SIZE]) {
	int* pi = image;
	int i,j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("0%d ", *(pi + j));
		}
		printf("\n");
	}
	printf("\n");
}

void brighten_image(int image[][SIZE]) {
	int* pi = image;
	int i, j;
	for (i = 0; i < 5; i++) {
		*(pi+i) += 10;
	}
}
