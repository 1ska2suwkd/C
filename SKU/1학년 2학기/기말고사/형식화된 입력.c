#include <stdio.h>

int main() {
	int i = 0;
	float f = 0;
	FILE* fp = NULL;

	fp = fopen("sample.txt", "r");

	if (fp != NULL) {
		fscanf(fp,"%d %f",&i,&f);
	}
	printf("%d %f", i, f);
	fclose(fp);

	return 0;
}
