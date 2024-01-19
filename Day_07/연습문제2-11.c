#include <stdio.h>

int main() {
	int i=1;
	int sum = 0;

	while (i <= 10) {
		
		sum = sum + i;
			i++;
		printf("i=%2d : sum =%2d\n", i-1, sum);
		
	}
	printf("sum = %d", sum);
	return 0;
}