/*
if 조건문의 동작 방식 알아보기

C언어는 0을 거짓으로, 그 외의 값을 모두 참으로 사용합니다.
*/
#include <stdio.h>

int main()
{
	if (0)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}