/*
����: ����, ���� ������ ����ϱ�

ǥ�� �Է����� ����, �Ǽ�, ���ڰ� �Էµ˴ϴ�.���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ������ �Ǽ��� 1 ������Ű��,
���ڴ� ���ĺ� �������� �ٷ� �� ���ڰ� ��µǰ� ���弼��.

����
�Է� 1 1.0 d
��� 2 2.000000 c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	float num2;
	char c1;

	scanf("%d %f %c", &num1, &num2, &c1);

	// �� ĭ
	num1++;
	num2++;
	c1--;

	printf("%d %f %c\n", num1, num2, c1);

	return 0;
}