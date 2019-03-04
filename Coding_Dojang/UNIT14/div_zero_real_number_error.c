// 변수에 실수와 0.0을 저장해서 나누면 inf(무한대)가 나옴.
#include <stdio.h>

int main()
{
	float num1 = 1.0f;
	float num2 = 0.0f;
	float num3;

	num3 = num1 / num2;

	printf("%f\n", num3);

	return 0;
}