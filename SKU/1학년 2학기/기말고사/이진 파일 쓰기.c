#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
	int buffer[256] = { 10,20,30,40,50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다."); // stderr 표준 에러를 연결 장치로 지정하였기 때문에 모니터에 출력됨
		exit(1);
	}

	fwrite(buffer, sizeof(int), SIZE, fp);

	fclose(fp);
	return 0;
}
