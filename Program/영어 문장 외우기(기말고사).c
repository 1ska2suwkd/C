#include <stdio.h>
#include <string.h>
#define QUESTION 21

int comparision(char ans[], char a[]);
void ps(char ans[][100], int wrong[], char problem[][100], int pnumber);

int main() {
    int i, j, choice = -1;
    char ans[QUESTION][100];
    int wrong[QUESTION]; // 틀린 문제 번호를 저장할 배열
    int wrong_count;     // 틀린 문제 개수

    char korea[15][100] = {
    {"Korea is in east Asia"},
    {"The capital city is Seoul"},                                          //2.수도
    {"The currency is the won"},                                            //3.화폐
    {"The national flower is the mugunghwa"},                               //4.꽃
    {"The national instrument is the gayageum"},                            //5.악기
    {"The national anthem is Aegukga"},                                     //6.국가
    {"Traditional food is kimchi"},                                         //7.음식
    {"Traditional clothing is the hanbok"},                                 //8.옷
    {"The population is about 51 million"},                                 //9.인구
    {"The official language is Korean"},                                    //10.언어
    {"Famous people are Faker and Son Heung-min"},                          //11.유명인
    {"The colors on the flag are white, red, blue, and black"},             //12.국기 색
    {"The president is Yoon Suk-yeol"},                                     //13.대통령
    {"A popular tourist attraction is Jeju Island"},                        //14.관광지
    {"The tallest mountain is Hallasan on Jeju Island"},                    //15.높은산
    };
    char idioms[10][100] = {
        {"I feel blue when it rains"},
        {"I rest and drink warm water to get over a cold"},
        {"I was on top of the world when I got my driver's license"},
        {"I drop by the library after school to study"},
        {"I call my friends now and then"},
        {"I always hit the books at home after school"},
        {"I can't stand the heat"},
        {"I hit the ceiling because my friend lied to me"},
        {"I saw red when my friend broke our plans"},
        { "I'm mad about Python, I've been into it for 1 year" }
    };
    char map[7][100] = {
        {"This is a map of Europe"},
        {"France is in western Europe"},
        {"Spain is bordered by 5 countries: France, Portugal, Andorra, Gibraltar, and Morocco"},
        {"The capital city of Germany is Berlin"},
        {"The distance between Paris and Madrid is approximately 1,000 kilometers"},
        {"Madrid is to the southwest of Paris"},
        {"The most northern city on the map is Reykjavik, the capital of Iceland"}
    };

    // 1. What is this a map of?
    // 2. Where is France?
    // 3. How many countries border Spain, and what are they?
    // 4. What is the capital city of Germany?
    // 5. Approximately, what is the distance between Paris and Madrid?
    // 6. From Paris, where is Madrid?
    // 7. What's the most northern city on the map?

    while (choice != 0) {
        printf("무엇을 학습하시겠습니까? (1:나라소개, 2:관용구, 3:지도, 0:종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            ps(ans,wrong,korea,15);
        }
        else if (choice == 2) {
            ps(ans, wrong,idioms,10);
        }
        else if (choice == 3) {
            ps(ans, wrong,map,7);
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

void ps(char ans[][100],int wrong[],char problem[][100], int pnumber) {
    int i, j, choice = -1;
    int wrong_count = 0; // 틀린 문제 개수 초기화



    for (i = 0; i < pnumber; i++) {
        printf("%d:\n", i + 1);
        scanf(" %[^\n]", ans[i]);

        if (comparision(ans[i], problem[i]) == -1) {
            printf("오답입니다. 정답:\n%s\n\n",problem[i]);
            wrong[wrong_count++] = i; // 틀린 문제 번호 저장
        }
        else {
            printf("정답입니다.\n\n");
        }
    }

    // 틀린 문제 다시 풀기
    while (wrong_count > 0) {
        printf("\n틀린 문제를 다시 풀어봅시다.\n");
        int new_wrong_count = 0; // 새로운 틀린 문제 개수
        for (j = 0; j < wrong_count; j++) {
            i = wrong[j]; // 틀린 문제 인덱스
            printf("%d:\n", i + 1);
            scanf(" %[^\n]", ans[i]);

            if (comparision(ans[i], problem[i]) == -1) {
                printf("오답입니다. 정답:\n%s\n\n", problem[i]);
                wrong[new_wrong_count++] = i; // 아직 틀린 문제 저장
            }
            else {
                printf("정답입니다.\n\n");
            }
        }
        wrong_count = new_wrong_count; // 틀린 문제 개수 업데이트
    }
}

