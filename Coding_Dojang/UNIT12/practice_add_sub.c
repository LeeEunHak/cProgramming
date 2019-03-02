/*
문제: 덧셈, 뺄셈하기

다음 소스 코드를 완성하여 100이 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	int num1;
	int num2 = 5;

	num1 = 10 - num2;

	// 연산자 뒤 빈 칸 채우기
	num1 += 95;

	printf("%d\n", num1);

	return 0;
}