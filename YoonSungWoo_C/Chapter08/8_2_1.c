/*
����1

�������� ����ϵ� ¦�� ��(2, 4, 6, 8)�� ��µǵ��� ����. ���� 2���� 2X2����,
4���� 4X4����, 6���� 6X6����, 8���� 8X8������ ��µǵ��� ���α׷��� �����غ���.
continue�� break���� ����ؼ� �� ������ �ذ��ϱ� �ٶ���.
*/
#include <stdio.h>

int main()
{
	int cur, is;

	for (cur = 1; cur <= 9;cur++) {
		if (cur%2 != 0)
			continue;

		for (is = 1; is <= 9; is++) {
			if (cur < is)
				break;
			printf("%d X %d = %d\n", cur, is, cur*is);
		}
		printf("\n");
	}

	return 0;
}