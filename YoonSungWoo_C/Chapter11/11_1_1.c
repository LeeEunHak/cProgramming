/*
����1

���̰� 5�� int�� �迭�� �����ؼ� ����ڷκ��� �� 5���� ������ �Է� ����!
�׸��� �Է��� ������ �ִ�, �ּڰ�, ���� ����ϵ��� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>

int main()
{
	int arr[5];
	int max, min, sum;

	for (int i = 0; i < 5; i++) {
		printf("���� �Է�: ");
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];

	for (int i = 1; i < 5; i++) {
		sum += arr[i];

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	printf("�� ��: %d\n", sum);

	return 0;
}