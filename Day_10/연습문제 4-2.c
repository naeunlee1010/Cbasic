#include<stdio.h>
int total(int a, int b, int c) {
	printf("����:%d",a+b+c);
	return a + b + c;
}

int average(int a, int b, int c) {
	printf("���:%d", a + b + c/3);
	return a + b + c / 3;
}

int main() {
	int a, b, c;
	printf("�� ������ ������ �Է��ϼ���");
	scanf_s("%d %d %d", &a, &b, &c);
	total(a, b, c);
	average(a, b, c);

	return 0;
}