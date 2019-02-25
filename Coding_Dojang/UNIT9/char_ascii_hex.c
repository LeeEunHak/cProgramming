// 문자 변수 선언하기(16진수)
#include <stdio.h>

int main()
{
	char c1 = 0x61;
	char c2 = 0x62;

	// %x로 출력하면 16진수로 출력
	printf("%c, %d, 0x%x\n", c1, c1, c1);
	printf("%c, %d, 0x%x\n", c2, c2, c2);

	return 0;
}