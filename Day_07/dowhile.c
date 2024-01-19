//do~while문
#include <stdio.h>

int main() {
	int a = 10;
	while (a < 5) {
		printf("while문 %d\n", a);
		a++;
	}

	a = 10; //do~while은 처음 실행 될 때 참/거짓 상관없이 일단 한 번 실행
	do {
		printf("dowhile문 %d\n", a);
		a++;
	} while (a < 5);

	return 0;
}