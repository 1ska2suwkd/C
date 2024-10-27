//틀린 문제를 다시 풀 수 있게 하는 기능필요 
#include <stdio.h>
#include <string.h>
#define QUESTION 21

int comparision(char ans[], char a[]);

int main() {
    int i, choice = -1;
    char ans[QUESTION][100];
    char switzerland[15][100] = {
        {"Switzerland is in Central Europe"},
        {"The capital city is Bern"},
        {"The currency is the CHF"},
        {"The national flower is the edelweiss"},
        {"The president is Viola Amherd"},
        {"The official language is Italian"},
        {"Traditional food is fondue"},
        {"The national music is yodel"},
        {"Traditional clothing is the tracht"},
        {"The population is about 877 million"}
    };
    char idioms[5][100] = {
        {"I grew up in Ansan"},
        {"I get in touch with my friends by Instagram"},
        {"I have something in common with my dad, we both wear glasses"},
        {"Yesterday, I gave my mom a hand with cooking dinner"},
        {"I need to get ready for home"}
    };
    char myself[6][100] = {
        {"My name is Chaeheon Lee"},
        {"I'm from Korea. I live in Ansan"},
        {"I am 20 years old"},
        {"My major is computer engineering"},
        {"In my free time, I like to write code"},
        {"My family consists of five members"}
    };

    while (choice != 0) {
        printf("무엇을 학습하시겠습니까? (1:나라소개, 2:관용구, 3:자기소개, 0:종료): ");
        scanf("%d", &choice);
        

        if (choice == 1) {
            for (i = 0; i < 10; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);  // 공백 포함 입력 받기

                if (comparision(ans[i], switzerland[i]) == -1) {
                    printf("오답\n");
                    continue;
                }
                else {
                    printf("정답\n");
                }
            }
        }
        else if (choice == 2) {
            for (i = 0; i < 10; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);  // 공백 포함 입력 받기

                if (comparision(ans[i], idioms[i]) == -1) {
                    printf("오답\n");
                    continue;
                }
                else {
                    printf("정답\n");
                }
            }
        }
        else if (choice == 3) {
            for (i = 0; i < 10; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);  // 공백 포함 입력 받기

                if (comparision(ans[i], myself[i]) == -1) {
                    printf("오답\n");
                    continue;
                }
                else {
                    printf("정답\n");
                }
            }
        }
        else break;
    }
    return 0;
}

int comparision(char ans[], char a[]) {
    if (strcmp(ans, a) == 0)
        return 1;  // 정답
    else
        return -1; // 오답
}
