#include<stdio.h>


int ADD(int a,int b) {
	printf("%d + %d = %d", a, b, a + b);
	return a + b;
}
int SUB(int a, int b) {
	printf("%d + %d = %d", a, b, a + b);
	return a + b;
}
int MUL(int a, int b) {
	printf("%d + %d = %d", a, b, a + b);
	return a + b;
}
int DIV(int a, int b) {
	printf("%d + %d = %d", a, b, a + b);
	return a + b;
}


int main() {
	int a, b;

	printf("두 정수 입력:");
	scanf_s("%d %d", &a, &b);

	ADD(a, b);
	
	return 0;
}