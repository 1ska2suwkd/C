#include <stdio.h> //표준 입출력 라이브러리를 포함한다.
#define SIZE 16 //상수 SIZE를 16으로 설정한다.
int binary_search(int list[], int n, int key); //이진탐색 함수와 함수에 필요한 매개변수들을 선언한다.

int main() { //main 함수를 정의한다.
	int key; //변수 key를 정수형으로 정의한다.
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 }; //배열 garde를 정수형으로 선언하고, 배열의 크기는 SIZE(16)이며, 정렬된 값들로 초기화한다
	printf("탐색할 값을 입력하시오:"); //사용자에게 탐색할 값을 입력하라는 메시지를 출력한다.
	scanf("%d", &key); //사용자로부터 입력받은 값을 변수 key에 저장한다.
	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key)); //binary_search 함수를 호출하고 탐색결과를 출력한다.
	return 0; //프로그램을 종료한다.
}

int binary_search(int list[], int n, int key) { //이진탐색 함수를 정의한다. 이 함수는 정렬된 배열 list에서 key 값을 찾고, 해당 값의 인덱스 번호를 반환한다.
	int low, high, middle; //변수 low, high, middle을 정수형으로 정의한다.
	low = 0; //변수 low를 0으로 초기화한다.
	high = n - 1; //high를 n - 1로 초기화한다.
	while (low <= high) { //반복문 while을 선언해주고 low가 high보다 작거나 같은 경우일 때만 반복한다.
		printf("[%d %d]\n", low, high); //low와 high의 값을 출력하여 현재 탐색 범위를 나타낸다.
		middle = (low + high) / 2; //middle을 탐색하고있는 범위의 중간 인덱스로 설정한다.
		if (key == list[middle]) //key와 list[middle]이 같다면, 즉 key를 찾았다면
			return middle; //middle이 사용자가 찾던 값의 인덱스 번호이므로 middle을 반환한다.
		else if (key > list[middle]) //key가 list[middle]보다 크다면, 즉 key가 더 큰 값의 범위에 있다면
			low = middle + 1; //low의 값을 middle에 1을 더한 값으로 설정한다.
		else //key가 list[middle]보다 작다면, 즉 key가 더 작은 값의 범위에 있다면
			high = middle - 1; //high의 값을 middle에 1을 뺀 값으로 설정한다.
	}
	return -1; //잘못된 값을 입력했을 경우 -1을 반환한다.
}
