/*
문제: 리터럴 사용하기

다음 소스 코드를 완성하여 Hello, world!76 - 2147483647 4.528172가 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	// 쉼표 뒤에 빈 칸 채우기
	printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);

	return 0;
}