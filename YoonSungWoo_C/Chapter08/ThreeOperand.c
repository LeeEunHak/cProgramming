/*
예시 문제

사용자로부터 정수를 입력받아 절댓값을
출력하는 프로그램을 작성해보자.
(단, 삼 항 연산자를 사용한다.)
*/
#include <stdio.h>

int main()
{
	int num, abs;

	printf("정수 입력: ");
	scanf("%d", &num);

	abs = (num > 0) ? num : num * (-1);

	printf("절댓값: %d\n", abs);

	return 0;
}