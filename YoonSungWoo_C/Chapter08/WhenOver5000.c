/*
���� ����1

1+2+3+...+n�� ����� ���ʷ� 5000�� �ѱ� ����
n�� ���ϴ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	int num = 0, sum = 0;

	while (1) {
		sum += num;
		if (sum > 5000)
			break;    // sum�� ���� 5000�� �ʰ��� ��� �ݺ��� Ż��!
		num++;
	}

	printf("sum: %d\n", sum);
	printf("num: %d\n", num);

	return 0;
}