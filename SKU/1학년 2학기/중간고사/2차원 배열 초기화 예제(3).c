#include <stdio.h>
int main(void)
{
	int i, j;
	int s[][5] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);
}
