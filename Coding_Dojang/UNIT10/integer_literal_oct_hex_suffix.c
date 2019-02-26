// 정수 리터럴 접미사 사용하기(8진수, 16진수)
#include <stdio.h>

int main()
{
	printf("0%lo\n", 017L);
	printf("0%lo\n", 017UL);
	printf("0x%lX\n", 0x7FFFFFL);
	printf("0x%lX\n", 0xFFFFFFFFUL);

	return 0;
}