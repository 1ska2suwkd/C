#include <stdio.h>

int main() {
	int x, y, z;

	if (scanf("%d%d%d", &x, &y, &z) == 3)
		printf("정수들의 합은 %d", x + y + z);
	else
		printf("입력이 올바르지 않음");
}
