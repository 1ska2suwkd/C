#include <stdio.h>

int main() {
	char s[80];

	printf("문자열을 입력하시오:");
	scanf("%[abc]", s); // %[] 은 대괄호 안에 문자를 집합 단위로 읽기 때문에 대괄호에 포함되지 않는 문자를 만나는 순간 중지된다.
	printf("입력된 문자열=%s\n", s);

	return 0;
}
