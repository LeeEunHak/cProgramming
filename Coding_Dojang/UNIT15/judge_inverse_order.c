/*
문제: 정수의 각 자릿수를 역순으로 출력하기

표준 입력으로 만 단위의 정수 하나가 입력됩니다.
입력된 정수의 각 자릿수를 역순으로 출력하는 프로그램을 만드세요.
예를 들어 43561이라면 1 6 5 3 4를 출력하면 됩니다.각 자릿수는 공백으로 띄우세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int num1, num2, num3, num4, num5;

	scanf("%d\n", &num);

	num1 = num % 10;

	num2 = ( (num % 100) - (num % 10) ) / 10;

	num3 = ( (num % 1000) - (num % 100) ) / 100;

	num4 = ( (num % 10000) - (num % 1000) ) / 1000;

	num5 = ( num - (num % 10000) ) / 10000;

	printf("%d %d %d %d %d\n", num1, num2, num3, num4, num5);
	
	return 0;
}