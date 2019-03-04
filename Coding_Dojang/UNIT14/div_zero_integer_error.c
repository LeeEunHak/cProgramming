/*
변수에 정수와 0을 저장해서 나누면 
컴파일 에러는 발생하지 않지만 실행을 하면 에러 발생
*/
#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 0;
	int num3;

	num3 = num1 / num2;    // 1을 0으로 나눔. 실행 에러 발생

	printf("%d\n", num3);

	return 0;
}