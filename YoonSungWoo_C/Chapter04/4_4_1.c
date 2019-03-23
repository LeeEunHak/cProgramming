/*
문제1

입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성해보자.
(단, 비트 연산자를 이용해서 구현해야 한다.)
*/
#include <stdio.h>

int main()
{
	int num;

	printf("한 개의 정수 입력: ");
	scanf("%d", &num);

	// 2의 보수를 구하는 코드를 구성
	num = ~num;
	num = num + 1;

	printf("부호를 바꾼 결과: %d\n", num);

	return 0;
}