/*
문제4

입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("몫: %d, 나머지: %d\n", num1 / num2, num1 % num2);

	return 0;
}