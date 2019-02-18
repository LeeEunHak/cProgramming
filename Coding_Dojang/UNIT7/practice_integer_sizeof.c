/*
문제: 자료형 크기 구하기

다음 소스 코드를 완성하여 14가 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	short num1;
	long long num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));
	// 2 + 8 + 4 = 14

	return 0;
}