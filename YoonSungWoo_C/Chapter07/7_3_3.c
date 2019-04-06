/*
문제3

while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재 구현해 보자.
do~while문의 중첩에 대해서는 별도의 언급이 없었지만, while문의 중첩을 이해하였으니,
충분히 응용이 가능하다.

구구단 2단 ~ 9단 전체를 출력하는 문제
*/
#include <stdio.h>

int main()
{
	int cur = 2, is = 0;

	do {
		is = 1;
			do {
				printf("%d X %d = %d\n", cur, is, cur * is);
				is++;
			} while (is <= 9);
			cur++;
			printf("\n");
	} while (cur <= 9);

	return 0;
}