// 구구단 2단부터 9단까지 전체 출력 (단, while문을 사용한다.)
#include <stdio.h>

int main()
{
	int dan = 2, i = 0;
	
	while (dan <= 9)    // 2단부터 9단까지 반복
	{
		i = 1;    // 새로운 단의 시작을 위해서

		while (i <= 9)    // 각 단의 1부터 9의 곱을 표현
		{
			printf("%d X %d = %d\n", dan, i, dan * i);
			i++;
		}
		dan++;    // 다음 단으로 넘어가기 위한 증가
	}

	return 0;
}