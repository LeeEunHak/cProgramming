/*
����2

char�� 1���� �迭�� ����� ���ÿ� "Good time"�̶�� �������� �ʱ�ȭ�ϰ�,
�ʱ�ȭ ���Ŀ��� ����� ������ ����ϴ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	char str[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int arrLen = sizeof(str) / sizeof(char);

	for (int i = 0; i < arrLen; i++) {
		printf("%c", str[i]);
	}

	printf("\n");
	return 0;
}