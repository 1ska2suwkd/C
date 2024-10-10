#include <stdio.h>
int main() {
	int n;
	int m;
	scanf("%d", &n);
	m = n-1;
	for (int i = 1; i <= n; i++) {
		for (int t = 1; t <= m; t++)
			printf(" ");
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		m--;
		printf("\n");
	}
	return 0;
	}
