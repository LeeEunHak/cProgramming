/*
문제1

프로그램 사용자로부터 총 5개의 정수를 입력 받아서,
그 수의 합을 출력하는 프로그램을 작성해보자. (단, while문의 중첩을 사용한다.)

조건

정수는 반드시 1이상이어야 한다. 만약에 1미만의 수가 입력되는 경우에는,
이를 입력으로 인정하지 않고 재 입력을 요구해야 한다.
*/
#include <stdio.h>

int main()
{
	int input = 0, i = 0, sum = 0;

	printf("5개의 정수를 입력하세요.\n");

	while (i < 5)
	{
		while (input <= 0)
		{
			printf("0보다 큰수를 입력(%d번째): ", i+1);
			scanf("%d", &input);
		}
		sum += input;
		input = 0;    // 먼저 입력한 값을 0으로 저장하고 다시 새로운 값을 입력 받음
		i++;
	}

	printf("총 합: %d\n", sum);

	return 0;
}