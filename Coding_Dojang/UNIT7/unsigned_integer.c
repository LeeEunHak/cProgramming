// ��ȣ ���� ���� �ڷ��� �����ϱ�
#include <stdio.h>

int main()
{
	unsigned char num1 = 200;
	unsigned short num2 = 60000;
	unsigned int num3 = 123456789;
	unsigned long num4 = 123456789;
	unsigned long long num5 = 1234567890123456789;

	/*
	unsigned char, unsigned char, unsigned char�� %u�� ����ϰ�,
	unsigned long�� %lu, unsigned long long�� %llu�� ���
	*/
	printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}