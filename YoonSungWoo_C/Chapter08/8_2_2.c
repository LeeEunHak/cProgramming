/*
문제2

다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.

  A Z
+ Z A
-------
  9 9

  참고로, 가능한 모든 수의 조합을 시도하기 위해서는 반복문을 중첩시켜야 한다.
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