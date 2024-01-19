#include <stdio.h>

int main() {

	int sum =0, num = 0;

	while (1) {
		
		printf("정수입력>>");
		scanf_s("%d",&num);
		if (num < 0) break;
		sum = sum + num;
		printf("%d\n", sum);
		
	}
	return 0;
}
