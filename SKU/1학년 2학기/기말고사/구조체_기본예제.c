#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student a;
	struct student b = { 20240000, "김뽀삐", 4.5 }; //구조체 초기화

	scanf("%d %s %lf", &a.number, a.name, &a.grade);

	printf("%d, %s, %lf\n", a.number, a.name, a.grade);
	printf("%d, %s, %lf\n", b.number, b.name, b.grade);
}
