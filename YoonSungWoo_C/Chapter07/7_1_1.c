/*
����1

���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world!"��
����ϴ� ���α׷��� �ۼ��غ���. (��, while���� ����Ͽ� �ۼ��Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int num, i = 0;

	printf("���� ���� �Է�: ");
	scanf("%d", &num);

	while (i < num) {
		printf("Hello wolrd!\n");
		i++;
	}

	return 0;
}