/*
���� ����3

������ 2�� ~ 9�� ��ü�� ����ϴ� ���α׷��� �ۼ��غ���.
(��, for���� ��ø�� ����Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int cur, is;

	for (cur = 2; cur <= 9; cur++) {
		for (is = 1; is <= 9; is++) {
			printf("%d X %d = %d\n", cur, is, cur * is);
		}
		printf("\n");
	}

	return 0;
}