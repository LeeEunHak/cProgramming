/*
문제1

예제 문제 UsefulDoWhile.c를 while문 기반으로 재 구현해보자.

사용자가 입력하는 정수를 모두 더한 값을 출력하는 프로그램.
0이 입력되면 프로그램이 종료된다.
*/
#include <stdio.h>

int main()
{
	int num = 1;    // num값을 처음에 0으로 저장하면 오류 발생
	int total = 0;

	while (num != 0) {
		printf("정수입력: ");
		scanf("%d", &num);
		total += num;
	}

	printf("합계: %d\n", total);

	return 0;
}