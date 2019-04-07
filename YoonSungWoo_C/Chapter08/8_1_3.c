/*
문제3

학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성해보자. 학생의 성적이 
90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D, 그리고 그 미만이면 F다!

프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다. 그리고는 평균을 구한 다음
그에 적절한 학점을 출력하면 된다.
*/
#include <stdio.h>

int main()
{
	double kor, eng, math, avg = 0;

	printf("국어, 영어, 수학 점수 입력: ");
	scanf("%lf %lf %lf", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	printf("평균: %f\n", avg);

	if (avg >= 90) printf("A!\n");
	else if (avg >= 80) printf("B!\n");
	else if (avg >= 70) printf("C!\n");
	else if (avg >= 50) printf("D!\n");
	else printf("F!\n");

	return 0;
}