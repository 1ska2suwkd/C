#include <stdio.h>
int main() {
	int i,j;
	int s[3][5] = {
	{0,1,2,3,4},
	{10,11,12,13,14},
	{20,21,22,23,24}
	};

	int a[][5] = {
		{0,1,2,3,4 },
		{10,11,12,13,14},
		{20,21,22,23,24}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);

	printf("\n");

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			printf("%d\n", a[i][j]);
}
