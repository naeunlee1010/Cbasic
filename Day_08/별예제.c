#include<stdio.h>

int main() {

	int a;
	printf("�����Է�:");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		printf("\n");
		for (int j = 1; j < a+1; j++) {
			printf("%d",j);
		}
	}
}