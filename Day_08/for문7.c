#include<stdio.h>

int main() {

	for (int dan = 2; dan <= 9; dan++) {
		printf("-------%d´Ü--------\n", dan);
		for (int a = 1; a <= 9; a++) {
			printf("%d x%d = %d\n", dan, a, dan * a);
		}
	}
	return 0;
}