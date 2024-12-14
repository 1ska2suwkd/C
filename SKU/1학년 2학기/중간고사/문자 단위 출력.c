#include <stdio.h>

int main() {
	char c;

	FILE* fp = NULL;
	fp = fopen("sample.txt", "r");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	
	while ((c = fgetc(fp)) != EOF) // 파일의 끝을 만나면 반복문 중지
		putchar(c); // fgetc(fp)를 통해 받은 문자 출력

	fclose(fp);

	return 0;
}
