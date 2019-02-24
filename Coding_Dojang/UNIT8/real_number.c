// 실수형 변수 선언하기
#include <stdio.h>

int main()
{
	float num1 = 0.1f;					// float는 숫자 뒤에 f를 붙임
	double num2 = 3867.215820;			// double은 숫자 뒤에 아무것도 붙이지 않음
	long double num3 = 9.327513l;		// long double는 숫자 뒤에 Lf를 붙임

	// float와 double은 %f로 출력, long double은 %Lf로 출력
	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}