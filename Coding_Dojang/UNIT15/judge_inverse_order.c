/*
����: ������ �� �ڸ����� �������� ����ϱ�

ǥ�� �Է����� �� ������ ���� �ϳ��� �Էµ˴ϴ�.
�Էµ� ������ �� �ڸ����� �������� ����ϴ� ���α׷��� ���弼��.
���� ��� 43561�̶�� 1 6 5 3 4�� ����ϸ� �˴ϴ�.�� �ڸ����� �������� ��켼��.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int num1, num2, num3, num4, num5;

	scanf("%d\n", &num);

	num1 = num % 10;

	num2 = ( (num % 100) - (num % 10) ) / 10;

	num3 = ( (num % 1000) - (num % 100) ) / 100;

	num4 = ( (num % 10000) - (num % 1000) ) / 1000;

	num5 = ( num - (num % 10000) ) / 10000;

	printf("%d %d %d %d %d\n", num1, num2, num3, num4, num5);
	
	return 0;
}