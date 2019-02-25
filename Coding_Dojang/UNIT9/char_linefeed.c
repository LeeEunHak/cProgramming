// 제어문자 사용하기
#include <stdio.h>

int main()
{
	char c1 = 'a';
	char c2 = 'b';
	char lineFeed = '\n';    // 제어 문자 \n 할당

	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // 제어 문자도 %c로 출력할 수 있음

	return 0;
}