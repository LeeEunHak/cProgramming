/*
도전1

10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해 보자.
*/
#include <stdio.h>

int main()
{
	int num;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	printf("입력한 정수의 16진수: %x\n", num);

	return 0;
}