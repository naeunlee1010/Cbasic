//do~while��
#include <stdio.h>

int main() {
	int a = 10;
	while (a < 5) {
		printf("while�� %d\n", a);
		a++;
	}

	a = 10; //do~while�� ó�� ���� �� �� ��/���� ������� �ϴ� �� �� ����
	do {
		printf("dowhile�� %d\n", a);
		a++;
	} while (a < 5);

	return 0;
}