/*
문제: 정수형 변수 선언과 오버플로우

다음 소스 코드를 완성하여 0 0 -128이 출력되게 만드세요.
*/
#include <stdio.h> 

int main()
{
	// 빈 칸
	unsigned short num1 = 0;
	unsigned int num2 = 0;
	char num3 = 0;

	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d\n", num1, num2, num3);

	return 0;
}