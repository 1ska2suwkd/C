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

	while (!feof(fp)) { // feof 함수는 파일이 eof를 만나고 나서도 한 번 참이기 때문에 반복문이 한 번 더 실행 됨
		if(fscanf(fp, "%d %s %f", &s.number, s.name, &s.score) == 3){ // 이 조건문이 없으면 count 변수가 한번 더 증가되어서 평균 값이 이상하게 나옴
			total += s.score;
			count++;
		}
	}

	printf("평균 = %f", total / count);
	fclose(fp);

	return 0;
}
