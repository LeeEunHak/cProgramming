// 자료형 크기 구하기
#include <stdio.h>

int main()
{
	float num1 = 0.0f;
	double num2 = 0.0;
	long double num3 = 0.0l;

	printf("float: %d, double: %d, long double: %d\n",
		sizeof(num1), sizeof(num2), sizeof(num3));
	//4 8 8 

	return 0;
}