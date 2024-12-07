#include <stdio.h>
#include <string.h>
#define QUESTION 21

int comparision(char ans[], char a[]);

int main() {
    int i, j, choice = -1;
    char ans[QUESTION][100];
    int wrong[QUESTION]; // 틀린 문제 번호를 저장할 배열
    int wrong_count;     // 틀린 문제 개수

    char switzerland[15][100] = {
        {"Switzerland is in Central Europe"},      
        {"The capital city is Bern"},                                           //2.수도
        {"The currency is the CHF"},                                            //3.화폐
        {"The national flower is the edelweiss"},                               //4.꽃
        {"The national instrument is the alphorn"},                             //5.악기
        {"The national music is yodel"},                                        //6.음악
        {"The national anthem is Swiss Psalm"},                                 //7.국가
        {"Traditional food is fondue"},                                         //8.음식
        {"Traditional clothing is the tracht"},                                 //9.옷
        {"The population is about 8 million"},                                  //10.인구
        {"The official language is Italian"},                                   //11.언어
        {"Famous people are Leonhard Euler and Albert Einstein"},               //12.유명인
        {"The colors on the flag are red and white"},                           //13.국기 색
        {"The president is Viola Amherd"},                                      //14.대통령
        {"A popular tourist attraction is the Matterhorn"},                     //15. 관광지
    };
    char idioms[5][100] = {
        {"I grew up in Ansan"},
        {"I get in touch with my friends by instagram"},
        {"I have something in common with my dad, we both wear glasses"},
        {"Yesterday, I gave my mom a hand with cooking dinner"},
        {"I was in seventh heaven when I got a good score in my major class"}
    };
    char myself[6][100] = {
        {"My name is Chaeheon Lee"},
        {"I'm from Korea. I live in Ansan"},
        {"I am 20 years old"},
        {"My major is computer engineering"},
        {"In my free time, I like to write codes"},
        {"My family consists of five members"}
    };

    while (choice != 0) {
        printf("무엇을 학습하시겠습니까? (1:나라소개, 2:관용구, 3:자기소개, 0:종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            wrong_count = 0; // 틀린 문제 개수 초기화
            for (i = 0; i < 15; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);

                if (comparision(ans[i], switzerland[i]) == -1) {
                    printf("오답\n");
                    wrong[wrong_count++] = i; // 틀린 문제 번호 저장
                }
                else {
                    printf("정답\n");
                }
            }

            // 틀린 문제 다시 풀기
            while (wrong_count > 0) {
                printf("\n틀린 문제를 다시 풀어봅시다.\n");
                int new_wrong_count = 0; // 새로운 틀린 문제 개수
                for (j = 0; j < wrong_count; j++) {
                    i = wrong[j]; // 틀린 문제 인덱스
                    printf("%d: ", i + 1);
                    scanf(" %[^\n]", ans[i]);

                    if (comparision(ans[i], switzerland[i]) == -1) {
                        printf("오답\n");
                        wrong[new_wrong_count++] = i; // 아직 틀린 문제 저장
                    }
                    else {
                        printf("정답\n");
                    }
                }
                wrong_count = new_wrong_count; // 틀린 문제 개수 업데이트
            }
        }
        else if (choice == 2) {
            wrong_count = 0;
            for (i = 0; i < 5; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);

                if (comparision(ans[i], idioms[i]) == -1) {
                    printf("오답\n");
                    wrong[wrong_count++] = i;
                }
                else {
                    printf("정답\n");
                }
            }

            while (wrong_count > 0) {
                printf("\n틀린 문제를 다시 풀어봅시다.\n");
                int new_wrong_count = 0;
                for (j = 0; j < wrong_count; j++) {
                    i = wrong[j];
                    printf("%d: ", i + 1);
                    scanf(" %[^\n]", ans[i]);

                    if (comparision(ans[i], idioms[i]) == -1) {
                        printf("오답\n");
                        wrong[new_wrong_count++] = i;
                    }
                    else {
                        printf("정답\n");
                    }
                }
                wrong_count = new_wrong_count;
            }
        }
        else if (choice == 3) {
            wrong_count = 0;
            for (i = 0; i < 6; i++) {
                printf("%d: ", i + 1);
                scanf(" %[^\n]", ans[i]);

                if (comparision(ans[i], myself[i]) == -1) {
                    printf("오답\n");
                    wrong[wrong_count++] = i;
                }
                else {
                    printf("정답\n");
                }
            }

            while (wrong_count > 0) {
                printf("\n틀린 문제를 다시 풀어봅시다.\n");
                int new_wrong_count = 0;
                for (j = 0; j < wrong_count; j++) {
                    i = wrong[j];
                    printf("%d: ", i + 1);
                    scanf(" %[^\n]", ans[i]);

                    if (comparision(ans[i], myself[i]) == -1) {
                        printf("오답\n");
                        wrong[new_wrong_count++] = i;
                    }
                    else {
                        printf("정답\n");
                    }
                }
                wrong_count = new_wrong_count;
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

