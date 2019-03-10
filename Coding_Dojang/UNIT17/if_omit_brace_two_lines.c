// if 조건문에서 중괄호 생략하기(실행할 코드가 두 줄 이상일 때 주의할 점)
#include <stdio.h>

int main()
{
	int num1 = 5;

	if (num1 == 10)
		printf("if 조건문\n");    // if문에서 중괄호를 생략하면 첫 번째 줄만 실행됨
		printf("10입니다.\n");    // 중괄호가 없으므로 if의 결과와는 관계없이 항상 실행됨

	return 0;
}