/*
����2

���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��غ���.

  A Z
+ Z A
-------
  9 9

  �����, ������ ��� ���� ������ �õ��ϱ� ���ؼ��� �ݺ����� ��ø���Ѿ� �Ѵ�.
*/
#include <stdio.h>

int main()
{
	int a, z, result;

	for (a = 0; a <= 9; a++) {
		for (z = 0; z <= 9; z++) {
			result = (a * 10 + z) + (z * 10 + a);
			if (result == 99)
				printf("%d%d + %d%d = %d\n", a, z, z, a, result);
		}
		continue;
	}

	return 0;
}