/*
����: ����÷ο�

���� �ҽ� �ڵ带 �ϼ��Ͽ� 0.000000e+00�� ��µǰ� ���弼��.
*/
#include <stdio.h>
#include <float.h>

	int main()
{
	float num1 = FLT_MIN;

	// num1 �ڿ� �� ĭ ä���
	num1 = num1 / 100000000.0f;

	printf("%e\n", num1);

	return 0;
}

/*
�ؼ�
float�� �ּڰ��� FLT_MIN�� 0�� �Ǿ��ٸ� ����÷ο찡 �߻��� ��Ȳ�Դϴ�. 
���� num1�� ū ���� ������ �˴ϴ�.
*/