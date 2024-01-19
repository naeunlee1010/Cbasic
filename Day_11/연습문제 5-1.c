#include <stdio.h>

int main() {
	int histogram[10] = { 0 };
	int elem;

	printf("10개 배열 원소 입력\n");
	for (int i = 0; i < sizeof(histogram)/sizeof(int); i++) {
		printf("histogram[%d]:",i);
		scanf_s("%d", &histogram[i]);
	}

	printf("\n\nElement\tValue\tHistogram\n");
	for (int i = 0; i < 10; i++) {
		printf("%7d\t%5d\t",i,histogram[i]);
		for (int j = 0; j < histogram[i]; j++) {
			printf("*");
			printf("\n");
		}
	}




	return 0;
}