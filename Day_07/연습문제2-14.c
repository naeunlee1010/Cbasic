#include <stdio.h>

int main() {
	int num;
	int remain;//10으로 나눈 나머지

	printf("역순으로 출력 할 정수를 구하시오:");
	scanf_s("%d", &num);
	while (num>0 ) {
		
		remain = num % 10;
		num = num / 10;
		printf("%d", remain);

		//선생님
		printf("%d", num % 10);
		num /= 10
	}

	return 0;
}