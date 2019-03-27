/*
문제5

프로그램 사용자로부터 알파벳 문자 하나를 입력 받는다. 그리고 이에 해당하는 
아스키 코드 값을 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	char alphabet;

	printf("알파벳 입력: ");
	scanf("%c", &alphabet);

	printf("아스키 코드 값: %d\n", alphabet);

	return 0;
}