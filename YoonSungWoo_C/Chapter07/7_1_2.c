/*
����2

���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ
3�� ����� ����ϴ� ���α׷��� �ۼ��غ���. (��, while���� ����Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int num, i = 1;

	printf("���� ���� �Է�: ");
	scanf("%d", &num);

	while (i <= num) {
		printf("%d ", i * 3);
		i++;
	}

	return 0;
}