#include <stdio.h> //자료형에 따라 증가하는 값이 다르다는 것이 중요함

int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	return 0;
}
