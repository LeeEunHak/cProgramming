/*
문제: 한 번에 정수 세 개 입력받기

다음 소스 코드를 완성하여 정수 세 개를 입력받도록 만드세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	// scanf() 빈 칸 채우기
	printf("정수 세 개를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return 0;
}