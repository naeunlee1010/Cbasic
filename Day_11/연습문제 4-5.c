#include <stdio.h>
int DIV(int a, int b, int*p) {
	*p = a % b;
	return a / b;
}
int main() {
	int a, b,quot,rem;

	print("두 정수 입력 :");
	scanf_s("%d %d", &a, &b);

	quot = DIV(a, b, &rem);
	printf("\n%d;%d=%d,나머지:%d \n", a, b, quot, rem);
}