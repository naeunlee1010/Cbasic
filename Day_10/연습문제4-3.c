#include<stdio.h>
int Min(int, int);
int Max(int, int);

int main() {
	int a, b, c;
	printf("�� ���� ���� �Է�:");
	scanf_s("%d %d %d",&a, &b, &c);

	int max = Max(a, b, c);
	printf("�ִ밪:%d\n",max);
	printf("�ּڰ�:%d", Min(a, b, c));


	return 0;
}

int Max(int a, int b, int c) {
	if (a > b) {
		if (a > c) return a;
		else return c;
	}
	else
		if (b > c) return b;
		else return c;
}

int Min(int a, int b, int c) {
	if (a < b) {
		if (a < c) return a;
		else return c;
	}
	else
		if (b < c) return b;
		else return c;
}