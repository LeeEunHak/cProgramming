/*
����: �����÷ο�

���� �ҽ� �ڵ带 �ϼ��Ͽ� -inf�� ��µǰ� ���弼��.
*/
#include <stdio.h>
#include <float.h>

int main()
{
	// �ʱⰪ ä���
	float num1 = -FLT_MAX;

	num1 = num1 * 1000.0f;

	printf("%f\n", num1);

	return 0;
}