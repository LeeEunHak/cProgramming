// 실수 입력받기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1;

	printf("실수를 입력하세요: ");
	scanf("%f", &num1);    // 실수를 입력받아서 변수에 저장

	printf("%f\n", num1);    //변수의 내용을 출력

	return 0;
}