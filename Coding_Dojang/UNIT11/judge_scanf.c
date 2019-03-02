/*
문제: 정수, 실수, 문자 입력받기

표준 입력으로 정수, 실수, 문자가 입력됩니다. 입력된 정수, 실수, 문자를 각 줄에 출력하는 프로그램을 만드세요.
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	float num2;
	char c1;

	printf("정수, 실수, 문자를 하나씩 입력하세요: ");
	scanf("%d %f %c", &num1, &num2, &c1);

	printf("%d\n%f\n%c\n", num1, num2, c1);

	return 0;
}