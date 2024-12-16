#include <stdio.h>
int main() {
	FILE* fp = NULL;
	fp = fopen("p_nums.txt", "w");
	for (int i = 1; i <= 3; i++)
		fprintf(fp, "%d번 답: \n", i);
}
