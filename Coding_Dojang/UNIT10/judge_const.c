/*
문제: 상수 사용하기

다음 소스 코드를 완성하여 - 2.225074e-308 0x1285 9223372036854775807가 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 빈 칸
	const long double con1 = -2.225074e-308L;
	const int con2 = 0x1285;
	const long long con3 = 9223372036854775807LL;

	printf("%Le 0x%x %lld\n", con1, con2, con3);

	return 0;
}