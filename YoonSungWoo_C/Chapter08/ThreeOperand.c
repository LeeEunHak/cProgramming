/*
���� ����

����ڷκ��� ������ �Է¹޾� ������
����ϴ� ���α׷��� �ۼ��غ���.
(��, �� �� �����ڸ� ����Ѵ�.)
*/
#include <stdio.h>

int main()
{
	int num, abs;

	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = (num > 0) ? num : num * (-1);

	printf("����: %d\n", abs);

	return 0;
}