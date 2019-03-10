/*
문제: if, else if, else를 모두 사용하기

다음 소스 코드를 완성하여 c가 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 초깃값 빈 칸 채우기
	char c1 = 'c';

	if (c1 == 'a')
		printf("a\n");
	else if (c1 == 'b')
		printf("b\n");
	else if (c1 == 'c')
		printf("c\n");
	else if (c1 == 'd')
		printf("d\n");
	else
		printf("x\n");

	return 0;
}