/*
����: ��� ����ϱ�

���� �ҽ� �ڵ带 �ϼ��Ͽ� - 2.225074e-308 0x1285 9223372036854775807�� ��µǰ� ���弼��.
*/
#include <stdio.h>

int main()
{
	// �� ĭ
	const long double con1 = -2.225074e-308L;
	const int con2 = 0x1285;
	const long long con3 = 9223372036854775807LL;

	printf("%Le 0x%x %lld\n", con1, con2, con3);

	return 0;
}