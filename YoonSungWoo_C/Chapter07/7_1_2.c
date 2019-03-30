/*
문제2

프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼
3의 배수를 출력하는 프로그램을 작성해보자. (단, while문을 사용한다.)
*/
#include <stdio.h>

int main()
{
	int num, i = 1;

	printf("양의 정수 입력: ");
	scanf("%d", &num);

	while (i <= num) {
		printf("%d ", i * 3);
		i++;
	}

	return 0;
}