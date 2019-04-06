/*
예시 문제2

프로그램 사용자가 입력하는 실수의 평균값을 출력한다. 실수의 입력은
0보다 작은 음의 실수 값이 입력될 때까지 계속되며, 입력을 마무리하기
위해서 마지막으로 입력된 음의 실수는 평균값 계산에서 제외한다.
*/
#include <stdio.h>

int main()
{
	double input = 0, total = 0;
	int num = 0;

	for (num = 0 ; input >= 0.0; num++) {
		total += input;
		printf("실수 입력: ");
		scanf("%lf", &input);
	}

	printf("평균: %f\n", total / (num - 1));
	// num에 -1을 하는 이유는 0 미만의 입력 값은 평균값에서 제외하기 위해서

	return 0;
}