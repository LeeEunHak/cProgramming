// 곱셈, 나눗셈하기
#include <stdio.h>

int main()
{
	int num1;
	int num2;

	num1 = 2 * 3;
	num2 = 7 / 2;

	printf("%d\n", num1);    // 6
	printf("%d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3

	return 0;
}