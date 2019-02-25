// 제어문자 사용하기
#include <stdio.h>

int main()
{
	char lineFeed = '\n';

	printf("%d 0x%x\n", lineFeed, lineFeed);

	return 0;
}

/*
실행 결과
10 0xa

제어 문자의 아스키 코드 값이 출력
*/