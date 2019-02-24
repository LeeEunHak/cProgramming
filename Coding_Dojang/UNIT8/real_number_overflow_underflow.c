// 오버플로우와 언더플로우 알아보기
#include <stdio.h>
#include <float.h>

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;

	// 아주 작은 수가 되면서 언더플로우 발생
	num1 = num1 / 100000000.0f;

	// 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
	num2 = num2 * 1000.0f;

	printf("%e %e\n", num1, num2);

	return 0;
}