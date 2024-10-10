#include <stdio.h>
int a[1000000];

int main() {
	int n;
	
	int max, min;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	printf("%d %d", min, max);

	return 0;
}
