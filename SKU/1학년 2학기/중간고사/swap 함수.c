#include <stdio.h>

void swap(int* px, int* py);

int main() {
	int a = 100;
	int b = 200;

	swap(&a, &b); //swap 함수에 변수 a와 b의 주소를 넘겨줌

	printf("%d %d", a, b); 

	return 0;
}

void swap(int* px, int* py) { //a와 b의 주소를 각각 포인터 px와 py랑 연결
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
