#include <stdio.h>
#define SIZE 16
int binary_search(int list[],int n, int key);

int main() {
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	int key;

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	printf("탐색결과= %d\n", binary_search(grade, SIZE, key));

	return 0;
}

int binary_search(int list[], int n, int key) {
	int i,low = 0, high = n - 1;
	int middle;

	while(low<=high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (list[middle] < key) //key 값의 인덱스 번호를 알아내는 것이기 때문에
			low = middle + 1;   //list에서 middle일때의 값을 key와 비교
		else if (list[middle] > key)
			high = middle - 1;
		else return middle;
	}

	return -1;
}
