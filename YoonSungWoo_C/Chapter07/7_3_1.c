/*
����1

���� ���� UsefulDoWhile.c�� while�� ������� �� �����غ���.

����ڰ� �Է��ϴ� ������ ��� ���� ���� ����ϴ� ���α׷�.
0�� �ԷµǸ� ���α׷��� ����ȴ�.
*/
#include <stdio.h>

int main()
{
	int num = 1;    // num���� ó���� 0���� �����ϸ� ���� �߻�
	int total = 0;

	while (num != 0) {
		printf("�����Է�: ");
		scanf("%d", &num);
		total += num;
	}

	printf("�հ�: %d\n", total);

	return 0;
}