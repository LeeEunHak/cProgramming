/*
문제 5

입력 받은 세 개의 정수 num1, num2, num3을 대상으로 다음 연산의 결과를 출력하는
프로그램을 작성해보자.  (num1 - num2) X (num2 + num3) X (num3 % num1)
*/
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("연산의 결과: %d\n", (num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}