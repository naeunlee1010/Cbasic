#include<stdio.h>

void count() {
	static int a = 0;
	a++;
	printf("count�Լ� %dȸȣ��\n", a);
}
int main() {

	count();
	count();
	count();
	count();
	count();

	return 0;
}