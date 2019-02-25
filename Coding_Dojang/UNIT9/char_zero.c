// 문자 변수 선언하기(0)
#include <stdio.h>

int main()
{
	char c1 = '0';    // 문자 0을 저장
	char c2 = 0;	  // 숫자 0을 저장

	printf("%c %d\n", c1, c1);
	printf("%c %d\n", c2, c2);

	return 0;
}
/*
실행 결과
0 48
  0

두 번째 출 첫 번째 값이 출력되지 않는 이유는
아스키 코드 0은 널 문자를 뜻하기 때문이다.
*/