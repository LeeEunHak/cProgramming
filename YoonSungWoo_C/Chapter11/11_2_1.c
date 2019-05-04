/*
문제1

프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은
영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	char voca[100];
	int len = 0;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	printf("입력한 영단어의 길이는 %d\n", len);

	return 0;
}