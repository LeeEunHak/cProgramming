// �ּڰ��� �ִ� ǥ���ϱ�
#include <stdio.h>
#include <float.h>    // �Ǽ� �ڷ����� ��� �ּڰ�, �ִ��� ���ǵ� ��� ����

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	double num3 = DBL_MIN;
	double num4 = DBL_MAX;
	long double num5 = LDBL_MIN;
	long double num6 = LDBL_MAX;

	//.40f�� .2f���� �Ҽ��� �ڿ� ���ڸ� �����ϸ� �ش� ���ڸ�ŭ �Ҽ��� ���� �ڸ����� ���
	printf("%.40f %.2f\n", num1, num2);

	printf("%e %e\n", num3, num4);
	printf("%Le %Le\n", num5, num6);

	return 0;
}