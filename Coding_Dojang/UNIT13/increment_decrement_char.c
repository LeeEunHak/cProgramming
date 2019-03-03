// 문자 자료형에 증감 연산자 사용하기
#include <stdio.h>

int main()
{
	char c1 = 'b';
	char c2 = 'b';

	c1++;    // 문자 자료형 변수의 값을 1 증가시킴
	c2--;    // 문자 자료형 변수의 값을 1 감소시킴

	printf("%c %c\n", c1, c2);    // c a

	return 0;
}