// �����÷ο�� ����÷ο� �˾ƺ���
#include <stdio.h>
#include <float.h>

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;

	// ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
	num1 = num1 / 100000000.0f;

	// ������ �� �ִ� ������ �Ѿ�Ƿ� �����÷ο� �߻�
	num2 = num2 * 1000.0f;

	printf("%e %e\n", num1, num2);

	return 0;
}