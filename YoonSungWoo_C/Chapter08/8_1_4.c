/*
����4

���� ����2�� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� �����غ���.
����2: �� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷�
*/
#include <stdio.h>

int main()
{
	int num1, num2, sub = 0;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	sub = (num1 > num2) ? (num1 - num2) : (num2 - num1);

	printf("���� ���: %d\n", sub);

	return 0;
}