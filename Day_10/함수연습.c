#include<stdio.h>

int Age(int a, int b) {
	printf("%d�����\n", a);
	printf("%d�⿡\n", b);
	return b - a + 1;
}

int main() {
	int age = Age(2002, 2024);
	printf("�ѱ� ���̷� %d�Դϴ�.", age);

	return 0;
}