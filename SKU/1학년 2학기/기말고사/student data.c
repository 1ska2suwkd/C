#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct student {
	int number;
	char name[10];
	float score;
};

int main() {
	int i;
	struct student table[SIZE] = {
		{1,"Kim",3.99},
		{2,"Min",2.68},
		{3,"Lee",4.01}
	};
	struct student s;
	FILE* fp = NULL;

	fp = fopen("student.dat", "wb");

	if (fp == NULL) {
		fprintf(stderr, "파일 student.dat을 열 수 없습니다.");
		exit(1);
	}

	fwrite(table, sizeof(struct student), SIZE, fp);
	fclose(fp);
	
	fp = fopen("student.dat", "rb");

	if (fp == NULL) {
		fprintf(stderr, "파일 student.dat을 열 수 없습니다.");
		exit(1);
	}

	for (i = 0; i < SIZE; i++) {
		fread(&s, sizeof(struct student), 1, fp);
		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.score);
	}

	fclose(fp);
	return 0;
}
