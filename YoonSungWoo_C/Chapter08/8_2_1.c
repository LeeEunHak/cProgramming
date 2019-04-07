/*
문제1

구구단을 출력하되 짝수 단(2, 4, 6, 8)만 출력되도록 하자. 또한 2단은 2X2까지,
4단은 4X4까지, 6단은 6X6까지, 8단은 8X8까지만 출력되도록 프로그램을 구현해보자.
continue와 break문을 사용해서 이 문제를 해결하기 바란다.
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