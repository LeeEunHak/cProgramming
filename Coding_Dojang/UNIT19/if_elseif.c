/*
else if 사용하기

else인 상태에서 조건식을 지정한다.
else if에 조건식을 지정하지 않으면 컴파일 에러가 발생한다.
*/
#include <stdio.h>

int main()
{
	int num1 = 20;

	if (num1 == 10)
		printf("10입니다.\n");
	else if (num1 == 20)
		printf("20입니다.\n");

	return 0;
}