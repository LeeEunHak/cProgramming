/*
����4

���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�,
�������� ����ϴ� ���α׷��� �ۼ��غ���. (��, while���� ����Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int num = 0, i=9;

	printf("���� �Է�: ");
	scanf("%d", &num);

	while (i > 0) {
		printf("%d X %d = %d\n", num, i, num*i);
		i--;
	}

	return 0;
}