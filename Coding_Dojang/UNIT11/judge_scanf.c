/*
����: ����, �Ǽ�, ���� �Է¹ޱ�

ǥ�� �Է����� ����, �Ǽ�, ���ڰ� �Էµ˴ϴ�. �Էµ� ����, �Ǽ�, ���ڸ� �� �ٿ� ����ϴ� ���α׷��� ���弼��.
���信�� C ��� �����Ϸ����� ���������� �����ϵǴ� ��ü �ڵ带 �Է��ؾ� �մϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	float num2;
	char c1;

	printf("����, �Ǽ�, ���ڸ� �ϳ��� �Է��ϼ���: ");
	scanf("%d %f %c", &num1, &num2, &c1);

	printf("%d\n%f\n%c\n", num1, num2, c1);

	return 0;
}