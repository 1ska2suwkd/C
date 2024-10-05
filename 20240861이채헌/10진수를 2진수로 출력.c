////10진수를 2진수로 출력하기
//#include <stdio.h>
//
//int main()
//{
//	unsigned int num;
//	printf("십진수:");
//	scanf("%u", &num);
//
//	unsigned int mask = 1 << 7;
//	printf("이진수:");
//
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	((mask & num) == 0) ? printf("0") : printf("1");
//	mask = mask >> 1;
//	
//	printf("\n");
//
//	return 0;
//}