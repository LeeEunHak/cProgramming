/*
����:�հ� ���� �Ǵ��ϱ�

ǥ�� �Է����� ����, ����, ����, ���� ������ �Էµ˴ϴ�. ���⼭ �� ������ ��� ������ 85�� �̻��� �� �հ��̶�� ���߽��ϴ�. 
��� ������ ���� "�հ�", "���հ�"�� ����ϴ� ���α׷��� ���弼��. ��, ������ 0������ 100�������� �Է¹��� �� ������ ������ 
����ٸ� "�߸��� ����"�� ����ϰ� �հ�, ���հ� ���δ� ������� �ʾƾ� �մϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor, eng, math, sci;
	int sum, avg;

	scanf("%d %d %d %d", &kor, &eng, &math, &sci);

	sum = kor + eng + math + sci;

	avg = sum / 4;

	if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 &&
		math >= 0 && math <= 100 && sci >= 0 && sci <= 100)
	{
		if (avg >= 85)
			printf("�հ�\n");
		else
			printf("���հ�\n");
	}
	else
		printf("�߸��� ����\n");

	return 0;
}