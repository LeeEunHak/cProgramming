/*
문제2 

3X8÷4 연산의 결과를 출력하는 프로그램을 작성해보자.
(단, *연산자와 / 연산자를 사용하지 않고 구현해야 한다.)
*/
#include <stdio.h>

int main()
{
	int num = 3;

	num = num << 3;
	num = num >> 2;

	printf("%d\n", num);

	return 0;
}