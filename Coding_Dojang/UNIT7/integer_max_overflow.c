// limits.h에 정의된 최댓값을 넘어서면 오버플로우가 발생
#include <stdio.h>
#include <limits.h>

int main()
{
	/*
	각 정수형에 최댓값보다 큰 수를 할당
	오버플로우 발생
	*/
	char num1 = CHAR_MAX + 1;
	short num2 = SHRT_MAX + 1;
	int num3 = INT_MAX + 1;
	long num4 = LONG_MAX + 1;

	// 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작
	printf("%d %d %d %ld\n", num1, num2, num3, num4);
	// -128 -32768 -2147483648 -2147483648

	/*
	각 정수형에 최댓값보다 큰 수를 할당
	오버플로우 발생
	*/
	unsigned char num5 = UCHAR_MAX + 1;
	unsigned short num6 = USHRT_MAX + 1;
	unsigned int num7 = UINT_MAX + 1;
	unsigned long num8 = ULONG_MAX + 1;

	// 부호 없는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값 0부터 다시 시작
	printf("%u %u %u %lu\n", num5, num6, num7, num8);
	// 0 0 0 0

	return 0;
}