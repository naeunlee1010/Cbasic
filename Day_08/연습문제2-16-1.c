#include<stdio.h>

int main() {
	int count = 0;
	int num;

	while (1) {

		printf("정수입력:");
		scanf_s("%d", &num);
		if (num < 0) break;
		count++;
		printf("%d 실행:%d회\n", num, count);

	}
	return 0;
}