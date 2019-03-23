/*
문제2

프로그램 사용자로부터 세 개의 정수 num1, num2, num3을 순서대로 입력 받은 후에,
num1Xnum2+num3 연산의 결과를 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d X %d + %d = %d\n", num1, num2, num3, num1*num2 + num3);

	return 0;
}