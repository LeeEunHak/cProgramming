/*
문제1

길이가 5인 int형 배열을 선언해서 사용자로부터 총 5개의 정수를 입력 받자!
그리고 입력이 끝나면 최댓값, 최솟값, 합을 출력하도록 프로그램을 작성해보자.
*/
#include <stdio.h>

int main()
{
	int arr[5];
	int max, min, sum;

	for (int i = 0; i < 5; i++) {
		printf("정수 입력: ");
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

	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	printf("총 합: %d\n", sum);

	return 0;
}