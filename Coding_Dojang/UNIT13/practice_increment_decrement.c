/*
문제: 증가, 감소 연산자 사용하기

다음 소스 코드를 완성하여 2와 7이 각 줄에 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// num1, num2 값 채우기
	int num1 = 2;
	int num2 = 8;
	int num3;
	int num4;

	num1++;
	num3 = --num1;

	--num2;
	num4 = num2++;

	printf("%d\n", num3);
	printf("%d\n", num4);

	return 0;
}