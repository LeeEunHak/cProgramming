/*
����3

while���� ��ø���� ���� TwoToNine.c�� do~while���� ��ø������� �� ������ ����.
do~while���� ��ø�� ���ؼ��� ������ ����� ��������, while���� ��ø�� �����Ͽ�����,
����� ������ �����ϴ�.

������ 2�� ~ 9�� ��ü�� ����ϴ� ����
*/
#include <stdio.h>

int main()
{
	int cur = 2, is = 0;

	do {
		is = 1;
			do {
				printf("%d X %d = %d\n", cur, is, cur * is);
				is++;
			} while (is <= 9);
			cur++;
			printf("\n");
	} while (cur <= 9);

	return 0;
}