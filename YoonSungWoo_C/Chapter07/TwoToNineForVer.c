/*
예시 문제3

구구단 2단 ~ 9단 전체를 출력하는 프로그램을 작성해보자.
(단, for문의 중첩을 사용한다.)
*/
#include <stdio.h>

int main()
{
	int cur, is;

	for (cur = 2; cur <= 9; cur++) {
		for (is = 1; is <= 9; is++) {
			printf("%d X %d = %d\n", cur, is, cur * is);
		}
		printf("\n");
	}

	return 0;
}