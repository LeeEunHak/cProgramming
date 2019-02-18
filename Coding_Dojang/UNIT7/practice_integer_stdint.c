/*
문제: 크기가 표시된 정수 자료형 사용하기

다음 소스 코드를 완성하여 -128 65535 2147483647 18446744073709551615가 출력되게 만드세요.
*/
#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	int32_t num3 = INT32_MAX;
	uint64_t num4 = UINT64_MAX;

	printf("%d %u %d %llu\n", num1, num2, num3, num4);

	return 0;
}