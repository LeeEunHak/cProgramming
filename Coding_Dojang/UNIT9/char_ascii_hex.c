// ���� ���� �����ϱ�(16����)
#include <stdio.h>

int main()
{
	char c1 = 0x61;
	char c2 = 0x62;

	// %x�� ����ϸ� 16������ ���
	printf("%c, %d, 0x%x\n", c1, c1, c1);
	printf("%c, %d, 0x%x\n", c2, c2, c2);

	return 0;
}