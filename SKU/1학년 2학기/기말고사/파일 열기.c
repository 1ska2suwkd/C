#include <stdio.h>

int main() {
	FILE* fp = NULL; // fp를 포인터로 선언하는 것은 FILE 구조체의 크기가 커서 (다른 이유도 많음)

	fp = fopen("sample.txt", "w"); // FILE *fp는 파일을 열 때 fopen 함수에 의해 생성된 FILE 구조체의 주소를 저장한다.

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fclose(fp);

	return 0;
}
