// �Ǽ��� ���� �����ϱ�
#include <stdio.h>

int main()
{
	float num1 = 0.1f;					// float�� ���� �ڿ� f�� ����
	double num2 = 3867.215820;			// double�� ���� �ڿ� �ƹ��͵� ������ ����
	long double num3 = 9.327513l;		// long double�� ���� �ڿ� Lf�� ����

	// float�� double�� %f�� ���, long double�� %Lf�� ���
	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}