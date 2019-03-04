// 곱셈, 나눗셈하기(실수)
#include <stdio.h>

int main()
{
	float num1;
	float num2;

	num1 = 2.73f * 3.81f;
	num2 = 7.0f / 2.0f;    // 실수끼리 나눗셈을 하면 정수와 달리 소수점 이하까지 계산됨

	printf("%f\n", num1);
	printf("%f\n", num2);

	return 0;
}