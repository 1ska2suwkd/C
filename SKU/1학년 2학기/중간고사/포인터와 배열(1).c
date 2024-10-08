#include <stdio.h>

int main() {
	int a[] = { 10,20,30,40,50 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a); // 이 부분이 교수님이 강조하시는 배열의 이름 == 주소값
	//&a[0] = a

	return 0;
}
