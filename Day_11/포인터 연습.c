#include <stdio.h>
void funcA(int *pa, int *pb) {
//a b의 값을 20으로 변경
	*pa = 20, *pb = 20;
}
int main() {
	int a = 10, b = 10;

	printf("a = %d,b=%d\n", a, b); //10,10
	funcA(&a,&b);
	printf("a =%d, b=%d\n", a, b); //20,20
}