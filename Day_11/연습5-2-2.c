#include <stdio.h>
int main() {
	int arr[SIZE] = { 45, -12, 67, -30, 81, -3, 13, 74, 3, 20 };
	printf("배열입력");
	int i = 0;

	for (i = 0; i < SIZE; i++) {
		printf("array[%d}:", i);
		scanf_s("%d", &arr[i]);

	}
	printf("\n\nArray[]={");
		for (int i = 0; i < SIZE; i++) {
			printf("%d", arr[i]);
		}

		int max = arr[0], min = arr[0];
		int maxindex = 0, minindex = 0;

	printf("최대값:%d 위치:%d", max, maxindex);
	printf("최소값:%d 위치:%d", max, minindex);

	