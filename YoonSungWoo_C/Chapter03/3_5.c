/*
���� 5

�Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ�
���α׷��� �ۼ��غ���.  (num1 - num2) X (num2 + num3) X (num3 % num1)
*/
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("������ ���: %d\n", (num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}