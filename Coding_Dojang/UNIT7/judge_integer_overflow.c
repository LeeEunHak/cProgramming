/*
����: ������ ���� ����� �����÷ο�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 0 0 -128�� ��µǰ� ���弼��.
*/
#include <stdio.h> 

int main()
{
	// �� ĭ
	unsigned short num1 = 0;
	unsigned int num2 = 0;
	char num3 = 0;

	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d\n", num1, num2, num3);

	return 0;
}