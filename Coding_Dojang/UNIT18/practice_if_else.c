/*
문제: else 사용하기

다음 소스 코드를 완성하여"거짓"이 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 초깃값 빈 칸 채우기
	unsigned long long num1 = 0;

	if (num1)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}