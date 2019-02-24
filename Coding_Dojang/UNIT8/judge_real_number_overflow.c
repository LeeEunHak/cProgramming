/*
문제: 오버플로우

다음 소스 코드를 완성하여 -inf가 출력되게 만드세요.
*/
#include <stdio.h>
#include <float.h>

int main()
{
	// 초기값 채우기
	float num1 = -FLT_MAX;

	num1 = num1 * 1000.0f;

	printf("%f\n", num1);

	return 0;
}