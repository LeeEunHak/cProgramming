/*
���� ����2

1�̻� 20�̸��� ������ ����ϵ�, 2�ǹ���� 3�� �����
��¿��� ���ܽ�Ű�� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	int num;

	printf("start!");

	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0)
			continue;    // continue�� ���� ���������� �̵�!
		printf("%d ", num);
	}

	printf("end! \n");

	return 0;
}