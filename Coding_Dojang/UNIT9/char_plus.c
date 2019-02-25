// 문자로 연산하기
#include <stdio.h>

int main()
{
	// a는 아스키 코드 값 97이고 1을 더하여 98이 되므로 각각 b 98이 출력됨
	printf("%c %d\n", 'a' + 1, 'a' + 1);
	printf("%c %d\n", 97 + 1, 97 + 1);

	return 0;
}