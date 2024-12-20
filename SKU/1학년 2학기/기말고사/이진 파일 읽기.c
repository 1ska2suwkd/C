#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
	int buffer[SIZE];
	FILE* fp = NULL;

	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		fprintf(stderr, "파일 binary.bin을 열 수 없습니다.\n");
		exit(1);
	}

	fread(buffer, sizeof(int), SIZE, fp);

	for (int i = 0; i < SIZE; i++) 
		printf("%d ", buffer[i]);

	fclose(fp);
	return 0;
}
