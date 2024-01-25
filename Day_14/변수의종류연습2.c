#include <stdio.h>
int result = 0;

void plus10() {
	
	result += 10;
	printf("+10 %d\n", result);
	
}

void minus1() {
	result -= 1;
	printf("-1 %d\n", result);
}


int main() {

	plus10();
	plus10();
	plus10();
	minus1();
	minus1();
	

	return 0;
}