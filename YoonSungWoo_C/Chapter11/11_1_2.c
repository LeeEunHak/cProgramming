/*
문제2

char형 1차원 배열을 선언과 동시에 "Good time"이라는 문장으로 초기화하고,
초기화 이후에는 저장된 내용을 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	char str[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int arrLen = sizeof(str) / sizeof(char);

	for (int i = 0; i < arrLen; i++) {
		printf("%c", str[i]);
	}

	printf("\n");
	return 0;
}