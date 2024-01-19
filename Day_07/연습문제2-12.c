#include <stdio.h>

int main() {
	
	int num=0;
	while (1) {
		
		num++;
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d\n", num);


		if (num > 100) break;
	}

	int a = 1;
	while (a <= 99) {

		if (a % 7 == 0 || a % 9 == 0) printf("%d\n", a);
		a++;
	}
	return 0;
}