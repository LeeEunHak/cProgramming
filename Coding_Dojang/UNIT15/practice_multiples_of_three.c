/*
����: 3�� ������� Ȯ���ϱ�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 0�� �� �� ��µǰ� ���弼��(1�� ������� �ʾƾ� �մϴ�).
*/
#include <stdio.h>

int main()
{
	int num1 = 15;
	int num2 = 27;
	// �� ĭ
	int num3 = 3;

	num1 %= num3;
	num2 %= num3;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}