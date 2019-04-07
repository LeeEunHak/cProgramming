/*
문제2

두 개의 정수를 입력받아서 두 수의 차를 출력하는 프로그램을 구현해 보자.
단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다. 즉, 출력결과는
무조건 0 이상이어야 한다.
*/
#include <stdio.h>

int main()
{
	int num1, num2, sub = 0;

	printf("두개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		sub = num1 - num2;
	else
		sub = num2 - num1;

	printf("뺄셈의 결과: %d\n", sub);

	return 0;
}