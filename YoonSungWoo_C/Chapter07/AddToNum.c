/*
���� ����1

'0�̻�, �׸��� ���α׷� ����ڰ� �Է��� ���� ������ ��'��
��� ���ؼ� �� ����� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		total += i;
	}

	printf("0���� %d���� �������: %d\n", num, total);

	return 0;
}