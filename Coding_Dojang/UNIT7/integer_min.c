// �ּڰ� ǥ���ϱ�
#include <stdio.h>
#include <limits.h>    // �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main()
{
	// �� �������� �ּڰ�
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -2147483648 -9223372036854775808

	return 0;
}