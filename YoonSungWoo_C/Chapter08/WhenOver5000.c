/*
예시 문제1

1+2+3+...+n의 결과가 최초로 5000을 넘길 때의
n을 구하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num = 0, sum = 0;

	while (1) {
		sum += num;
		if (sum > 5000)
			break;    // sum의 값이 5000을 초과할 경우 반복문 탈출!
		num++;
	}

	printf("sum: %d\n", sum);
	printf("num: %d\n", num);

	return 0;
}