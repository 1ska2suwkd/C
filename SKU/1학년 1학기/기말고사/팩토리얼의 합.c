//#include <stdio.h>
//int factorial(int n);
//int sum(int a, int b);
//
//int main() {
//	int a, b, f;
//	int res1, res2;
//	printf("두 정수를 입력해주세요:\n ");
//	scanf("%d %d", &a, &b);
//	printf("팩토리얼을 구할 값을 입력해주세요:\n ");
//	scanf("%d", &f);
//	res1 = sum(a, b);
//	res2 = factorial(f);
//	printf("두 정수 범위에 해당하는 짝수들의 합은 %d\n", res1);
//	printf("팩토리얼의 값은 %d\n", res2);
//
//	return 0;
//}
//
//int sum(int a, int b) {
//	int result = 0;
//	while (a <= b) {
//		if (a % 2 == 0)
//			result += a;
//		a++;
//	}
//	return result;
//
//}
//
//int factorial(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++)
//		result *= i;
//	return result;
//}
