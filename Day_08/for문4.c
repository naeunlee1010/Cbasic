#include<stdio

int main() {
	//for���� ( ; ; )���� �� �κ��� ���� ����
	int a = 0;
	for (; a < 5; a++) {
		printf("%d\n", a);
	}

	for (int i = 0; i < 5) {
		printf("%d\n", i);
		i++;
	}

	for (int i = 0; ; i++) printf("%d\n", i);

	a = 0;
	for (; ; ) {
		printf("%d\n", a);
		if (a == 0) break;
		a++;
	}

}>