// 최솟값 표현하기
#include <stdio.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
	// 각 정수형의 최솟값
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -2147483648 -9223372036854775808

	return 0;
}