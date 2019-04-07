/*
예시 문제2

1이상 20미만의 정수를 출력하되, 2의배수와 3의 배수를
출력에서 제외시키는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num;

	printf("start!");

	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0)
			continue;    // continue에 의해 증감식으로 이동!
		printf("%d ", num);
	}

	printf("end! \n");

	return 0;
}