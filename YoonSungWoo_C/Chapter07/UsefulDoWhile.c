/*
���� ����

����ڰ� �Է��ϴ� ������ ���ϴ� ���α׷��� �ۼ��غ���.
0�� �ԷµǸ� ��������� ����ϰ� �����Ѵ�. (��, dowhile���� ����Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int num, total = 0;

	do {
		printf("���� �Է�: ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);

	printf("�հ�: %d\n", total);

	return 0;
}