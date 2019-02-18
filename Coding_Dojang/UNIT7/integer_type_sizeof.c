// sizeof함수를 이용해 각 정수 자료형의 크기 알아보기
#include <stdio.h>

int main()
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	return 0;
}