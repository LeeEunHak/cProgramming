/*
문제2

다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
n! = 1 X 2 X 3 X .... X n
프로그램 사용자로부터 n에 해당하는 정수를 입력 받는다. 그러면
n의 계승 n!를 계산하여 출력이 이뤄져야 한다.
*/
#include <stdio.h>

int main()
{
	int num, fact = 1;

	printf("정수 n 입력: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		fact *= i;
	}

	printf("%d! = %d\n",num, fact);

	return 0;
}