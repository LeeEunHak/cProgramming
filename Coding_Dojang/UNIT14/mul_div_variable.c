// 변수 하나에서 값을 곱하거나 나누기
#include <stdio.h>

int main()
{
	int num1 = 2;
	int num2 = 7;

	num1 = num1 * 3;
	num2 = num2 / 2;

	printf("%d\n", num1);    // 6
	printf("%d\n", num2);    // 3

	return 0;
}