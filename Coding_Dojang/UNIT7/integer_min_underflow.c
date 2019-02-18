// limits.h�� ���ǵ� �ּڰ����� �۾����� ����÷ο찡 �߻�
#include <stdio.h>
#include <limits.h>

int main()
{
	/*
	�� �������� �ּڰ����� ���� ���� �Ҵ�
	����÷ο� �߻�
	*/
	char num1 = CHAR_MIN - 1;
	short num2 = SHRT_MIN - 1;
	int num3 = INT_MIN - 1;
	long long num4 = LLONG_MIN - 1;

	// ��ȣ �ִ� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
	printf("%d %d %d %lld\n", num1, num2, num3, num4);
	// 127 32767 2147483647 9223372036854775807

	/*
	�� �������� �ּڰ����� ���� ���� �Ҵ�
	����÷ο� �߻�
	*/
	unsigned char num5 = 0 - 1;
	unsigned short num6 = 0 - 1;
	unsigned int num7 = 0 - 1;
	unsigned long long num8 = 0 - 1;

	// ��ȣ ���� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
	printf("%u %u %u %llu\n", num5, num6, num7, num8);
	// 255 65535 4294967295 18446744073709551615

	return 0;
}