/*
문제: 증가, 감소 연산자 사용하기

표준 입력으로 정수, 실수, 문자가 입력됩니다.다음 소스 코드를 완성하여 입력된 정수와 실수는 1 증가시키고,
문자는 알파벳 순서에서 바로 앞 문자가 출력되게 만드세요.

예시
입력 1 1.0 d
결과 2 2.000000 c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	float num2;
	char c1;

	scanf("%d %f %c", &num1, &num2, &c1);

	// 빈 칸
	num1++;
	num2++;
	c1--;

	printf("%d %f %c\n", num1, num2, c1);

	return 0;
}