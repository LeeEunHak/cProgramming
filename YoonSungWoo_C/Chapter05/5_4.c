/*
문제4

프로그램 사용자로부터 아스키 코드 값을 정수 형태로 입력 받은 후에 
해당 정수의 아스키 코드 문자를 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int asc;

	printf("숫자 입력: ");
	scanf("%d", &asc);

	printf("아스키 문자: %c\n", asc);

	return 0;
}