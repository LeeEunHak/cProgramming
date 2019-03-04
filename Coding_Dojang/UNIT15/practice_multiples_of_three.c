/*
문제: 3의 배수인지 확인하기

다음 소스 코드를 완성하여 0이 두 번 출력되게 만드세요(1은 사용하지 않아야 합니다).
*/
#include <stdio.h>

int main()
{
	int num1 = 15;
	int num2 = 27;
	// 빈 칸
	int num3 = 3;

	num1 %= num3;
	num2 %= num3;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}