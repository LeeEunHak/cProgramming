/*
����3

�л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ��غ���. �л��� ������ 
90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D, �׸��� �� �̸��̸� F��!

���α׷� ���� �� ������� ����, ����, ������ ������ �Է� �޴´�. �׸���� ����� ���� ����
�׿� ������ ������ ����ϸ� �ȴ�.
*/
#include <stdio.h>

int main()
{
	double kor, eng, math, avg = 0;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%lf %lf %lf", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	printf("���: %f\n", avg);

	if (avg >= 90) printf("A!\n");
	else if (avg >= 80) printf("B!\n");
	else if (avg >= 70) printf("C!\n");
	else if (avg >= 50) printf("D!\n");
	else printf("F!\n");

	return 0;
}