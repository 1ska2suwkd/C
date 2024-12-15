#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	float score;
};

int main() {
	int count=0;
	char fname[100];
	float total = 0.0;
	struct student s;
	FILE* fp = NULL;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "w")) == NULL) {
		printf("성적 파일 %s을 열 수 없습니다.\n");
		exit(1);
	}

	while (1) {
		printf("학번, 이름, 성적을 입력하시오(음수이면 종료): ");
		scanf("%d", &s.number);
		if (s.number < 0) break;
		scanf("%s %f", s.name, &s.score);

		fprintf(fp, "%d %s %f\n", s.number, s.name, s.score);
	}

	fclose(fp);

	if ((fp = fopen(fname, "r")) == NULL) {
		printf("성적 파일 %s을 열 수 없습니다.\n");
		exit(1);
	}

	while (!feof(fp)) {
		if(fscanf(fp, "%d %s %f", &s.number, s.name, &s.score) == 3){
			total += s.score;
			count++;
		}
	}

	printf("평균 = %f", total / count);
	fclose(fp);

	return 0;
}
