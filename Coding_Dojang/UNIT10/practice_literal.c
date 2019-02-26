/*
문제: 리터럴 사용하기

다음 소스 코드를 완성하여 Hello, world! 8 4.900000e-302가 출력되게 만드세요.
*/

#include <stdio.h>

int main()
{
	// 쉼표 뒤에 빈 칸 채우기
	printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L);

	return 0;
}