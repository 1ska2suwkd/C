#include <stdio.h>

int main() {
    char s[3][20];
    int i;

    for (i = 0; i < 3; i++) {
        printf("과일 이름을 입력하시오: ");
        scanf("%s", s[i]);  //s[i] == &s[i][0]
    }
    for (i = 0; i < 3; i++) {
        printf("%d번째 과일: %s\n",i,s[i]);
    }
}
