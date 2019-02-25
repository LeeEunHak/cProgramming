/*
문제: 제어 문자 사용하기

다음 소스 코드를 완성하여 "Hello   world"가 출력되게 만드세요("Hello"와 "world" 사이는 탭으로 띄웁니다).
*/
#include <stdio.h>

	int main()
{
	// 빈 칸
	char c1 = '\t';

	printf("Hello");
	printf("%c", c1);
	printf("world\n");

	return 0;
}