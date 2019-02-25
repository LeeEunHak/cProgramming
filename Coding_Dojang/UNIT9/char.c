// 문자 변수 선언하기
#include <stdio.h>

int main()
{
	char c1 = 'a';
	char c2 = 'b';

	// char를 %c로 출력하면 문자가 출력, %d로 출력하면 정숫값이 출력
	printf("%c, %d\n", c1, c1);    // a의 아스키 코드 값은 97
	printf("%c, %d\n", c2, c2);    // b의 아스키 코드 값은 98

	return 0;
}