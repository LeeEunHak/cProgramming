/*
����: else ����ϱ�

ǥ�� �Է����� ���ڰ� �Էµ˴ϴ�. �Էµ� ���ڰ� a�̸� "a�Դϴ�."�� ����ϰ�,
a�� �ƴϸ� "a�� �ƴմϴ�."�� ����ϴ� ���α׷��� ���弼��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;

	scanf("%c", &c1);

	if (c1 == 'a')
		printf("a�Դϴ�.\n");
	else
		printf("a�� �ƴմϴ�.\n");

	return 0;
}