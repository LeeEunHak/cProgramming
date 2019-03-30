/*
문제4

프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되,
역순으로 출력하는 프로그램을 작성해보자. (단, while문을 사용한다.)
*/
#include <stdio.h>

int main()
{
	int num = 0, i=9;

	printf("숫자 입력: ");
	scanf("%d", &num);

	while (i > 0) {
		printf("%d X %d = %d\n", num, i, num*i);
		i--;
	}

	return 0;
}