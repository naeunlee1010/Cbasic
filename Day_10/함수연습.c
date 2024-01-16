#include<stdio.h>

int Age(int a, int b) {
	printf("%d년생은\n", a);
	printf("%d년에\n", b);
	return b - a + 1;
}

int main() {
	int age = Age(2002, 2024);
	printf("한국 나이로 %d입니다.", age);

	return 0;
}