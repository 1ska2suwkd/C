#include <stdio.h>

int main() {
	char S[101] = { 0 }; // 100이 최대이지만 null을 감안해서 101로 설정
	char a[26] = { 'a','b','c','d','e',
		'f','g','h','i','j',
		'k','l','m','n','o',
		'p','q','r','s','t',
		'u','v','w','x','y','z' };
	int b[26];

	scanf("%s", S);

	for (int i = 0; i < 26; i++) {  
		b[i] = -1;
		for (int j = 0; j < 100; j++) { 
			if (a[i] == S[j]) {
				b[i] = j;
				break;
			}
		}
		printf("%d ", b[i]);
	}
}
