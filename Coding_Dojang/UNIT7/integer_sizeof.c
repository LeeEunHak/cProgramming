/*
�ڷ��� ũ�� ���ϱ�

ǥ����� 3����
1. sizeof ǥ����
2. sizeof(�ڷ���)
3. sizeof(ǥ����)
*/
#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;    // ���� num1�� �ڷ��� ũ�⸦ ����

	printf("num1�� ũ��: %d\n", size);

	return 0;
}