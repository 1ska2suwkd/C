#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = NULL;
	char fname[128];
	char buffer[256];
	char word[256];
	int line_num = 0;

	printf("입력 파일 이름을 입력하시오:");
	scanf("%s", fname);

	printf("탐색할 단어를 입력하시오:");
	scanf("%s", word);

	fp = fopen(fname, "r");

	while ((fgets(buffer, 256, fp)) != NULL) { // fgets는 개행문자를 만나기 전까지 문자열을 읽어냄
		line_num++;
		if (strstr(buffer, word)) {
			printf("%s: %d 단어 %s이 발견되었습니다.\n", fname, line_num, word);
		}
	}

	fclose(fp);

	return 0;
}
