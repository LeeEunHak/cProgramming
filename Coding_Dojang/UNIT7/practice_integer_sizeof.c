/*
����: �ڷ��� ũ�� ���ϱ�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 14�� ��µǰ� ���弼��.
*/
#include <stdio.h>

int main()
{
	short num1;
	long long num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));
	// 2 + 8 + 4 = 14

	return 0;
}