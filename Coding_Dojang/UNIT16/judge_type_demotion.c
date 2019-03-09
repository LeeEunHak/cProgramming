/*
문제: 실수를 정수로 변환하기

표준 입력으로 실수가 하나가 입력됩니다.
입력된 실수에서 소수점을 버리고 정수 부분만 출력되게 만드세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1;

	scanf("%f", &num1);

	// 빈 칸
	int num2 = num1;
	printf("%d\n", num2);

	return 0;
}