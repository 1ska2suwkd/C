#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("원본 파일 이름: ");
	scanf("%s", file1);

	printf("복사 파일 이름: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL) // EOF가 아닌 NULL인 이유는 fgets는 문자열 기반이라 실패하거나 파일 끝에 도달하면 NULL을 반환함
		//fgetc같은 문자 기반 함수는 NULL이 아닌 EOF로 파일의 끝을 확인함
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);

	return 0;
}
