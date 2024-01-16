#include <stdio.h>

int main() {

	int a = 0;
	printf("초입력>>");
	scanf_s("%d", &a); //12006

	int h, m, s;
	s = a % 60; // 12006 %60 == 60
	a = a / 60; // 12006 /60 == 200
	m = a % 60; // 200 % 60 == 20
	a = a / 60; //200/60==3
	h = a % 60; //3%60==3

	printf("%d시간 %d분 %d초", h, m, s);
}