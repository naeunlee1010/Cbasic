#include <stdio.h>
int main() {
	int arr[SIZE] = { 45, -12, 67, -30, 81, -3, 13, 74, 3, 20 };
	printf("�迭�Է�");
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

	printf("�ִ밪:%d ��ġ:%d", max, maxindex);
	printf("�ּҰ�:%d ��ġ:%d", max, minindex);

	