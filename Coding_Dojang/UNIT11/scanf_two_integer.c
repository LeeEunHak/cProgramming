// 한 번에 정수 두 개 입력받기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("정수를 두 개 입력하세요: ");
	scanf("%d %d", &num1, &num2);    // 값을 두 개 입력받아서 변수 두 개에 저장

	printf("%d %d\n", num1, num2);    // 변수의 내용을 출력

	return 0;
}