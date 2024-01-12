#include<stdio.h>

int main() {

	for (int dan = 2; dan < 9; dan++) {
		if (dan % 2 != 0) continue;
		printf("----%d´Ü----\n", dan);
		
		for (int a = 1; a < 9; a++) {
			if (a > dan) continue;
			printf("%d x %d = %d\n", dan, a, dan * a);
			
		}
	}
}