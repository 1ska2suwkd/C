#include <stdio.h>

struct point {
	int x;
	int y;
};

int main() {
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };

	p2 = p1; // 대입은 가능

	printf("p2.x = %d p2.y = %d\n", p2.x, p2.y); 

	//if (p1 == p2) // <- 틀린 비교방법
	//	printf("p1와 p2가 같습니다."); 

	if((p1.x == p2.x) && (p1.y == p2.y)) // <- 올바른 비교 방법
		printf("p1와 p2가 같습니다.\n"); 
}
