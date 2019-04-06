/*
문제1 - 2번째 방법(책의 답)

프로그램 사용자로부터 두 개의 정수를 입력 받아서, 두 정수를 포함하여 그 사이에
존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성해보자. 그리고 문제를
조금 간단히 하기 위해서, 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더
커야 하다는 조건을 걸기로 하겠다.
*/
#include <stdio.h>

int main()
{
	int start, end, result;    // result는 start에서 end 사이 값의 합

	printf("시작과 끝 입력: ");
	scanf("%d %d", &start, &end);

	for (result = 0; start <= end; start++) {
		result += start;
	}

	printf("합계: %d\n", result);

	return 0;
}