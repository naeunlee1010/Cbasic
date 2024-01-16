#include<stdio.h>
int total(int a, int b, int c) {
	printf("총점:%d",a+b+c);
	return a + b + c;
}

int average(int a, int b, int c) {
	printf("평균:%d", a + b + c/3);
	return a + b + c / 3;
}

int main() {
	int a, b, c;
	printf("세 과목의 점수를 입력하세요");
	scanf_s("%d %d %d", &a, &b, &c);
	total(a, b, c);
	average(a, b, c);

	return 0;
}