/*
����2

���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ��غ���.
n! = 1 X 2 X 3 X .... X n
���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �޴´�. �׷���
n�� ��� n!�� ����Ͽ� ����� �̷����� �Ѵ�.
*/
#include <stdio.h>

int main()
{
	int num, fact = 1;

	printf("���� n �Է�: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		fact *= i;
	}

	printf("%d! = %d\n",num, fact);

	return 0;
}