/*
도전7

프로그램 사용자로부터 숫자 n을 입력 받는다. 그리고 나서 다음 공식이
성립하는 k의 최댓박을 계산해서 출력하는 프로그램을 작성해 보자.

공식: 2^k <= n
*/

#include <stdio.h>

int main()
{
	int num, k = 0, result = 2;

	printf("정수 입력: ");
	scanf("%d", &num);

	while (1) {
		if (result > num) break;
		result *= 2;
		k++;
	}

	printf("공식을 만족하는 k의 최댓값: %d\n", k);

	return 0;
}