/*
����2

�� ���� ������ �Է¹޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� ������ ����.
��, ������ ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�. ��, ��°����
������ 0 �̻��̾�� �Ѵ�.
*/
#include <stdio.h>

int main()
{
	int num1, num2, sub = 0;

	printf("�ΰ��� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		sub = num1 - num2;
	else
		sub = num2 - num1;

	printf("������ ���: %d\n", sub);

	return 0;
}