// �Ǽ��� ���� �����ϱ�
#include <stdio.h>

int main()
{
	float num1 = 3.e5f;
	double num2 = -1.3827e-2;
	long double num3 = 5.21e+9l;

	printf("%f %f %Lf\n", num1, num2, num3);

	// ���� ǥ������� ����� ���� float�� double�� %e�� ���, long double�� %Le�� ���
	printf("%e %e %Le\n", num1, num2, num3);

	return 0;
}