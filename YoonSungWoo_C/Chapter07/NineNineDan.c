#include <stdio.h>

int main()
{
	int dan, num = 1;

	printf("�� ��: ");
	scanf("%d", &dan);

	while (num < 10) {
		printf("%d X %d = %d\n", dan, num, dan*num);
		num++;
	}

	return 0;
}