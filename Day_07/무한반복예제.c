#include <stdio.h>

int main() {

	int a, b;

	while (1) {
		printf("두 정수 입력");
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("합은 %d\n", a + b);
	
	}
	printf("반복 종료");

	return 0;
}