/*
문제: 상수 사용하기

다음 소스 코드를 완성하여 10 3.200000 t가 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 빈 칸
	const unsigned long long con1 = 10ULL;
	const float con2 = 3.2f;
	const char con3 = 't';

	printf("%llu %f %c\n", con1, con2, con3);

	return 0;
}