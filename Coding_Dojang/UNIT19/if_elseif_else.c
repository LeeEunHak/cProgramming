// if, else if, else를 모두 사용하기
#include <stdio.h>

int main()
{
	int num1 = 30;

	if (num1 == 10)
		printf("10입니다.\n");
	else if (num1 == 20)
		printf("20입니다.\n");
	else
		// 앞의 조건식에 모두 만족하지 않을 때 실행
		printf("10도 20도 아닙니다.\n");

	return 0;
}