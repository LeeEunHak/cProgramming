/*
문제2

0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되,
do~while문 기반으로 구현해보자. 참고로 덧셈의 결과는 2550이 되어야 한다.
*/
#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	do {
		total += num;
		num += 2;    // num값은 0부터 시작하고 2를 더해주면서 짝수의 값만 표현
	} while (num <= 100);

	printf("0부터 100까지 짝수의 합: %d\n", total);

	return 0;
}