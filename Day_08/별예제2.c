#include<stdio.h>

int main() {

	int i, j, num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	for (j = 0; j < 5; j++) {
		printf("\n");
		for (i = 0; i < j+1; i++) {
			printf("*");
		}
	}
	
}