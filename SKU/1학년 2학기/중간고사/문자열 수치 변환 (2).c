#include <stdio.h>
#include <string.h>
int main() {
	char filename[100];
	char s[100];
	int i;

	for (i = 0; i < 6; i++) {
		strcpy(filename, "image");
		sprintf(s, "%d", i); //배열 s를 한번 거치는 이유는 filename에 바로 sprintf를 할 경우 기존에 문자열 "image"이 사라짐
		strcat(filename, s);
		strcat(filename, ".jpg");
		printf("%s\n", filename);
	}

	return 0;
}
