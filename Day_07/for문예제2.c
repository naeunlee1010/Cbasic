#include<stdio.h>

//모두 선택 단축키 ctr + a
//자동 정렬 단축키 ctr + k + f
int main() {
	int a = 0;

	for (a = 1; a < 101; a++) {
		if (a % 5 == 0)
			printf("%d\n", a);
	}

	for (a = 1; a < 11; a++) {
		if (a % 2 != 0)
			printf("%d\n", a);
	}

	return 0;
}