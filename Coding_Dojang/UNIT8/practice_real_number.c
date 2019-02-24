/*
문제: 실수형 변수 선언하기

다음 소스 코드를 완성하여 1.970000 5.524218 37928000.000000이 출력되게 만드세요.
*/
#include <stdio.h>

	int main()
{
	// 자료형 채우기
	float num1 = 1.97f;
	long double num2 = 5.524218l;
	double num3 = 3792.8e+4;

	printf("%f %Lf %f\n", num1, num2, num3);

	return 0;
}