#include<stdio.h>

int main() {

	int i, j, num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	for (j = 0; j < 5; j++) {
		printf("\n");
		for (i = 0; i < j+1; i++) {
			printf("*");
		}
	}
	
}