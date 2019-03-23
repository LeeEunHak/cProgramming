/*
문제3

하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num;

	printf("한 개의 정수 입력: ");
	scanf("%d", &num);

	printf("%d의 제곱의 값: %d\n",num, num * num);

	return 0;
}