/*
문제: 합격 여부 판단하기

A기업의 입사 시험은 필기 시험 점수가 80점 이상이면서 토익 점수가 850점 이상이라야 합격이라고 정했습니다.
다음 소스 코드를 완성하여 "합격", "불합격"이 출력되게 만드세요.
*/
#include <stdio.h>

int main()
{
	int writtenTest = 78;
	int toeic = 870;

	// 괄호 빈 칸 채우기
	if (writtenTest >= 80 && toeic >= 850)
		printf("합격\n");
	else
		printf("불합격\n");

	return 0;
}