/*
����: �Ǽ��� ���� ����� �ڷ��� ũ�� ���ϱ�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 1.800000 2.900000 3.700000�� 4 8�� ��µǰ� ���弼��.
*/
#include <stdio.h>

int main()
{
	// �� ĭ
	float num1 = 1.8f;
	double num2 = 2.9;
	long double num3 = 3.7l;

	printf("%f %f %Lf\n", num1, num2, num3);
	printf("%d %d\n", sizeof(num1), sizeof(num2));

	return 0;
}