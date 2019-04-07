/*
문제4

위의 문제2를 조건 연산자를 이용하는 형태로 프로그램을 변경해보자.
문제2: 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램
*/
#include <stdio.h>

int main()
{
	int num1, num2, sub = 0;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	sub = (num1 > num2) ? (num1 - num2) : (num2 - num1);

	printf("뺄셈 결과: %d\n", sub);

	return 0;
}