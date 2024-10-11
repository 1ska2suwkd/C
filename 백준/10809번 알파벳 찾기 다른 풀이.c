#include <stdio.h>

int main(void)
{
    char word[100] = { 0 };

    scanf("%s", word);

    for (int i = 97; i <= 122; i++) { // 아스키코드 97부터 122까지 반복

        int j = 0;

        while (word[j] != 0) {  // 인덱스가 0이 아닐 때 까지 반복
            if (word[j] == (char)i) break; //인덱스와 알파벳이 같으면 반복 멈춤
            j++; //같지않으면 계속해서 반복
        }

        // 해당 알파벳을 찾은 경우 인덱스 출력, 그렇지 않으면 -1 출력
        if (word[j] == (char)i) printf("%d ", j);
        else printf("-1 ");
    }
}
