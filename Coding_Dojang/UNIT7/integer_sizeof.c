/*
자료형 크기 구하기

표현방식 3가지
1. sizeof 표현식
2. sizeof(자료형)
3. sizeof(표현식)
*/
#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;    // 변수 num1의 자료형 크기를 구함

	printf("num1의 크기: %d\n", size);

	return 0;
}