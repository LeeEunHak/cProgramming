/*
����: ����, �����ϱ�

ǥ�� �Է����� �Ǽ� �� ���� �Էµ˴ϴ�. 
���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� �� �Ǽ��� ���� ������ 4.5�� ���ҽ�Ų ���� ��µǰ� ���弼��.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1;
	float num2;
	float num3;

	scanf("%f %f", &num1, &num2);

	// �� ĭ
	num3 = num1 + num2 - 4.5;

	printf("%f\n", num3);

	return 0;
}