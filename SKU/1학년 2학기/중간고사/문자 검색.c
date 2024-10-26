#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "language";
    char ch = 'g';
    char* p;  //포인터 자료형은 연결되는 변수의 자료형과 동일해야함 .
    int loc;
    

    p = strchr(str, ch);
    loc = (int)(p - str);

    if (p != NULL) {
        printf("첫번째 %c가 %d에서 발견되었음", ch, loc);
    }
    else
        printf("%c 없음",ch);
}
