#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[10];
	double grade;
	struct date dob;
};

int main() {
	struct student s1;

	s1.dob.year = 2024;
	s1.dob.month = 3;
	s1.dob.day = 2;

	printf("입학 날짜: %d년 %d월 %d일\n", s1.dob.year, s1.dob.month, s1.dob.day);

	return 0;
}
