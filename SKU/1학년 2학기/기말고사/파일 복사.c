#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[1024];
	int count;

	printf("첫번째 파일 이름: ");
	scanf("%s", file1);
	printf("두번째 파일 이름: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "rb")) == NULL) {
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	if ((fp2 = fopen(file2, "ab")) == NULL) {
		fprintf(stderr, "추가을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	while ((count = fread(buffer, sizeof(char), 1024, fp1)) > 0) { // fread는 읽어낸 데이터의 개수를 반환함. 또한 EOF를 만날 경우에는 0을 반환함
		fwrite(buffer, sizeof(char), count, fp2); // count를 정의한 이유는 추가할 때 데이터의 개수로 count를 사용하기 위함이다.
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}
