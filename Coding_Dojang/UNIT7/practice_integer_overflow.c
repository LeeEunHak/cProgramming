/*
����: ������ ���� ����� �����÷ο�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 0 0 -9223372036854775808�� ��µǰ� ���弼��.
*/
#include <stdio.h>

int main()
{
	unsigned char num1 = 256;
	unsigned short num2 = 65536;
	long long num3 = 9223372036854775808;

	printf("%u %u %lld\n", num1, num2, num3);

	return 0;
}