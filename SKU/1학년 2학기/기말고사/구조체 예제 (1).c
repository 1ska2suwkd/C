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
	strcpy(s.name, "이채헌"); // s.name = "이채헌" 을 할 경우 배열의 이름은 배열의 주소이므로 문자열에 주소를 참조하게 됨.
	s.grade = 4.5;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %d\n", s.grade);

	return 0;
}
