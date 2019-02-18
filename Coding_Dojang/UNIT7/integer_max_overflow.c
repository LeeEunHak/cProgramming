// limits.h�� ���ǵ� �ִ��� �Ѿ�� �����÷ο찡 �߻�
#include <stdio.h>
#include <limits.h>

int main()
{
	/*
	�� �������� �ִ񰪺��� ū ���� �Ҵ�
	�����÷ο� �߻�
	*/
	char num1 = CHAR_MAX + 1;
	short num2 = SHRT_MAX + 1;
	int num3 = INT_MAX + 1;
	long num4 = LONG_MAX + 1;

	// ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� ����
	printf("%d %d %d %ld\n", num1, num2, num3, num4);
	// -128 -32768 -2147483648 -2147483648

	/*
	�� �������� �ִ񰪺��� ū ���� �Ҵ�
	�����÷ο� �߻�
	*/
	unsigned char num5 = UCHAR_MAX + 1;
	unsigned short num6 = USHRT_MAX + 1;
	unsigned int num7 = UINT_MAX + 1;
	unsigned long num8 = ULONG_MAX + 1;

	// ��ȣ ���� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ� 0���� �ٽ� ����
	printf("%u %u %u %lu\n", num5, num6, num7, num8);
	// 0 0 0 0

	return 0;
}