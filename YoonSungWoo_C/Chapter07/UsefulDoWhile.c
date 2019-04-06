/*
예시 문제

사용자가 입력하는 정수를 더하는 프로그램을 작성해보자.
0이 입력되면 덧셈결과를 출력하고 종료한다. (단, dowhile문을 사용한다.)
*/
#include <stdio.h>

int main()
{
	int num, total = 0;

	do {
		printf("정수 입력: ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);

	printf("합계: %d\n", total);

	return 0;
}