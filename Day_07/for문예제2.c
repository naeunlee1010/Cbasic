#include<stdio.h>

//��� ���� ����Ű ctr + a
//�ڵ� ���� ����Ű ctr + k + f
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