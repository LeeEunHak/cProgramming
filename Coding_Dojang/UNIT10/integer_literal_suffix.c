// 정수 리터럴 접미사 사용하기
#include <stdio.h>

int main()
{
	printf("%ld\n", -10L);
	printf("%lld\n", -1234567890123456789LL);

	printf("%u\n", 10U);
	printf("%lu\n", 123456789UL);

	printf("%lu\n", 10UL);
	printf("%llu\n", 1234567890123456789ULL);

	return 0;
}