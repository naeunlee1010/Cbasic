//중첩된 if문
//if문 내부에 또다른 if~else문이 위치할 수 있음
//if~else문을 조건문, 분기문, 제어문이라고 부름
#include <stdio.h>

int main() {


	int a;
	scanf_s("%d", &a);

	if (a > 0) printf("plus\n");
	else {
		if (a == 0) printf("zero\n");
		else printf("minus\n");

	}
	return 0;
}