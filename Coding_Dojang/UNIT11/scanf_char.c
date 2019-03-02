// 문자 입력받기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;

	printf("문자를 입력하세요: ");
	scanf("%c", &c1);    // 문자를 입력받아서 변수에 저장

	printf("%c\n", c1);    // 변수의 내용을 출력

	return 0;
}