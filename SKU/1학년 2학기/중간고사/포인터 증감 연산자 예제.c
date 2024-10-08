#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi); // 10 그리고 i 주소값
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi); // 11 그리고 i 주소값

	printf("i = %d, pi = %p\n", i, pi); // 11 그리고 i 주소값
	*pi++;
	printf("i = %d, pi = %p\n", i, pi); // 11 그리고 i 주소값 +4

	return 0;
}
