// 실수형 변수 선언하기
#include <stdio.h>

int main()
{
	float num1 = 3.e5f;
	double num2 = -1.3827e-2;
	long double num3 = 5.21e+9l;

	printf("%f %f %Lf\n", num1, num2, num3);

	// 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
	printf("%e %e %Le\n", num1, num2, num3);

	return 0;
}