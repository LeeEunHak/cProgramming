/*
����2

���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�,
num1Xnum2+num3 ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d X %d + %d = %d\n", num1, num2, num3, num1*num2 + num3);

	return 0;
}