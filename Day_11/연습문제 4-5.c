#include <stdio.h>
int DIV(int a, int b, int*p) {
	*p = a % b;
	return a / b;
}
int main() {
	int a, b,quot,rem;

	print("�� ���� �Է� :");
	scanf_s("%d %d", &a, &b);

	quot = DIV(a, b, &rem);
	printf("\n%d;%d=%d,������:%d \n", a, b, quot, rem);
}