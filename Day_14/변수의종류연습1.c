#include<stdio.h>

void count() {
	static int a = 0;
	a++;
	printf("count함수 %d회호출\n", a);
}
int main() {

	count();
	count();
	count();
	count();
	count();

	return 0;
}