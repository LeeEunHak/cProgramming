/*
����7

���α׷� ����ڷκ��� ���� n�� �Է� �޴´�. �׸��� ���� ���� ������
�����ϴ� k�� �ִ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.

����: 2^k <= n
*/

#include <stdio.h>

int main()
{
	int num, k = 0, result = 2;

	printf("���� �Է�: ");
	scanf("%d", &num);

	while (1) {
		if (result > num) break;
		result *= 2;
		k++;
	}

	printf("������ �����ϴ� k�� �ִ�: %d\n", k);

	return 0;
}