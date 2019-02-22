/*
문제: 자료형 크기 구하기

다음 소스 코드를 완성하여 11이 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 빈 칸
	char num1 = 0;
	short num2 = 0;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));

	return 0;
}