// else와 세미콜론
#include <stdio.h>

int main()
{
	int num1 = 10;

	if (num1 == 10)
	{
		printf("10입니다.\n");
	}
	else;    // else에 세미콜론을 붙이면 안 됨
	{
		printf("10이 아닙니다.\n");  // if의 결과와는 관계없이 항상 실행됨
	}

	return 0;
}
/*
실행 결과
10입니다.
10이 아닙니다.
*/