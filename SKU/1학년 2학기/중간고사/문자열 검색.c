#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "A joy that's shared is a joy made double";
	char s2[] = "joy";
	char* p;
	int loc;

	p = strstr(s1, s2);
	loc = (int)(p - s1);

	if (p != NULL)
		printf("첫번째 %s가 %d에서 발견되었음", s2, loc);
	else
		printf("없음");
}
