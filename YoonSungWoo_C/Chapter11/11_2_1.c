/*
����1

���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ����
���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	char voca[100];
	int len = 0;

	printf("���ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	printf("�Է��� ���ܾ��� ���̴� %d\n", len);

	return 0;
}