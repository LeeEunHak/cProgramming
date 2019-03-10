/*
if 조건문의 동작 방식 알아보기

2처럼 0이 아닌 양수와 음수를 넣으면 무조건 참입니다.
실수도 마찬가지로 0.0f는 거짓이며 0.0f가 아닌 값들은 참입니다.
*/
#include <stdio.h>

int main()
{
	if (2)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}