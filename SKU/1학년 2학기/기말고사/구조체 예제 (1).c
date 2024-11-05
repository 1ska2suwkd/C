#include <stdio.h>
#include <stdlib.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;

	s.number = 20240000;
	strcpy(s.name, "이채헌");
	s.grade = 4.5;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %d\n", s.grade);

	return 0;
}
