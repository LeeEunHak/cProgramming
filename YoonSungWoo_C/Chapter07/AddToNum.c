/*
예시 문제1

'0이상, 그리고 프로그램 사용자가 입력한 정수 이하이 값'을
모두 더해서 그 결과를 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		total += i;
	}

	printf("0부터 %d까지 덧셈결과: %d\n", num, total);

	return 0;
}