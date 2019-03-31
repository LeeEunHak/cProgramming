/*
문제2

아래의 출력을 보이는 프로그램을 작성해보자.

*
o *
o o *
o o o *
o o o o *

참고로, 총 5행에 걸쳐서 출력이 이뤄지고, 행이 더해질 때마다
o 문자의 수가 증가한다는 특징이다. (단, while문의 중첩을 사용한다.)
*/
#include <stdio.h>

int main()
{
	int i = 0, k = 0;

	while (i < 5)
	{
		while (k < i)
		{
			printf("o ");
			k++;
		}
		k = 0;    // k를 0으로 저장하여 증가하는 값만큼 while문을 실행시킴
		printf("* \n");
		i++;
	}

	return 0;
}